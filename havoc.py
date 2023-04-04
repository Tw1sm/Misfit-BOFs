from havoc import Demon, RegisterCommand, RegisterModule
import re

class Packer:
    def __init__(self):
        self.buffer : bytes = b''
        self.size   : int   = 0

    def getbuffer(self):
        return pack("<L", self.size) + self.buffer
        
    def addWstr(self, s):
        s = s.encode("utf-16_le")
        fmt = "<L{}s".format(len(s) + 2)
        self.buffer += pack(fmt, len(s)+2, s)
        self.size += calcsize(fmt)


def ts_tasklist( demonID, *params ):
    TaskID : str    = None
    demon  : Demon  = None
    packer = Packer()
    demon  = Demon( demonID )

    num_params = len(params)

    if num_params < 1:
        demon.ConsoleWrite( demon.CONSOLE_ERROR, "Missing parameters" )
        return True

    if num_params > 1:
        demon.ConsoleWrite( demon.CONSOLE_ERROR, "Too many parameters" )
        return True
    
    host = params[ 0 ]

    TaskID = demon.ConsoleWrite( demon.CONSOLE_TASK, "Tasked demon to retrieve remote tasklist" )

    packer.addWstr(host)

    demon.InlineExecute( TaskID, "go", "dist/ts-tasklist.x64.o", packer.getbuffer(), False )

    return TaskID



RegisterCommand( ts_tasklist, "", "ts-tasklist", "Retrive processes running on a remote host", 0, "hostname", "dc01" )
