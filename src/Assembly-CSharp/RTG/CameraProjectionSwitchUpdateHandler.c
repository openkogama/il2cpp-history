
/* IAsyncResult BeginInvoke(CameraPrjSwitchTransition+Type, AsyncCallback, Object) */

IAsyncResult *
Assembly-CSharp.dll::RTG::CameraProjectionSwitchUpdateHandler::
CameraProjectionSwitchUpdateHandler_BeginInvoke
          (CameraProjectionSwitchUpdateHandler *this,
          CameraPrjSwitchTransition_Type__Enum transitionType,AsyncCallback *callback,Object *object
          ,MethodInfo *method)

{
  aCStackX_10[0] = transitionType;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__CameraPrjSwitchTransition__Type);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uStack_1 = 0;
  uStack_2 = FUN_?(TypeInfo__RTG__CameraPrjSwitchTransition__Type,aCStackX_10);
  pIVar3 = (IAsyncResult *)FUN_?(this,&uStack_2,callback,object);
  return pIVar3;
}

