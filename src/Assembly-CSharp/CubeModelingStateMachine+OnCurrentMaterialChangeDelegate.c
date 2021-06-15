
/* IAsyncResult BeginInvoke(Byte, Material, AsyncCallback, Object) */

IAsyncResult *
Assembly-CSharp.dll::CubeModelingStateMachine+OnCurrentMaterialChangeDelegate::
CubeModelingStateMachine_OnCurrentMaterialChangeDelegate_BeginInvoke
          (CubeModelingStateMachine_OnCurrentMaterialChangeDelegate *this,uint8_t currentMaterialId,
          Material *currentMaterial,AsyncCallback *callback,Object *object,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  uStack_1 = 0;
  uStack_2 = 0;
  uVar3 = func_?(TypeInfo__System__Byte,&currentMaterialId);
  uStack_2 = CONCAT44(currentMaterial,uVar3);
  pIVar4 = (IAsyncResult *)func_?(this,&uStack_2,callback,object);
  return pIVar4;
}

