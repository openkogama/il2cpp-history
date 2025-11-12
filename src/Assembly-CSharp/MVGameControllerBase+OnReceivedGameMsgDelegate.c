
/* IAsyncResult BeginInvoke(MVGameMsgType, Dictionary`2[System.Object,System.Object], AsyncCallback,
   Object) */

IAsyncResult *
Assembly-CSharp.dll::MVGameControllerBase+OnReceivedGameMsgDelegate::
MVGameControllerBase_OnReceivedGameMsgDelegate_BeginInvoke
          (MVGameControllerBase_OnReceivedGameMsgDelegate *this,MVGameMsgType__Enum type,
          Dictionary_2_System_Object_System_Object_ *gameMsgData,AsyncCallback *callback,
          Object *object,MethodInfo *method)

{
  aMStackX_10[0] = type;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MV__Common__MVGameMsgType);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uStack_1 = 0;
  uStack_2 = FUN_?(TypeInfo__MV__Common__MVGameMsgType,aMStackX_10);
  pDStack_3 = gameMsgData;
  pIVar4 = (IAsyncResult *)FUN_?(this,&uStack_2,callback,object);
  return pIVar4;
}

