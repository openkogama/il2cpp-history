
/* IAsyncResult BeginInvoke(MVGameMsgType, Dictionary`2[System.Object,System.Object], AsyncCallback,
   Object) */

IAsyncResult *
Assembly-CSharp.dll::MVGameControllerBase+OnReceivedGameMsgDelegate::
MVGameControllerBase_OnReceivedGameMsgDelegate_BeginInvoke
          (MVGameControllerBase_OnReceivedGameMsgDelegate *this,MVGameMsgType__Enum type,
          Dictionary_2_System_Object_System_Object_ *gameMsgData,AsyncCallback *callback,
          Object *object,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MV__Common__MVGameMsgType);
    cRam_? = '\x01';
  }
  uStack_1 = 0;
  uStack_2 = func_?(TypeInfo__MV__Common__MVGameMsgType,&type);
  pDStack_3 = gameMsgData;
  pIVar4 = (IAsyncResult *)func_?(this,&uStack_2,callback,object);
  return pIVar4;
}

