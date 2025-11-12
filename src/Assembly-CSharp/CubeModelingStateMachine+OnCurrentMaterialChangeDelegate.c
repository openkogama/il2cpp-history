
/* IAsyncResult BeginInvoke(Byte, Material, AsyncCallback, Object) */

IAsyncResult *
Assembly-CSharp.dll::CubeModelingStateMachine+OnCurrentMaterialChangeDelegate::
CubeModelingStateMachine_OnCurrentMaterialChangeDelegate_BeginInvoke
          (CubeModelingStateMachine_OnCurrentMaterialChangeDelegate *this,uint8_t currentMaterialId,
          Material *currentMaterial,AsyncCallback *callback,Object *object,MethodInfo *method)

{
  uStack_1 = 0;
  auStackX_10[0] = currentMaterialId;
  uStack_2 = FUN_?(uRam_?,auStackX_10);
  pMStack_3 = currentMaterial;
  pIVar4 = (IAsyncResult *)FUN_?(this,&uStack_2,callback,object);
  return pIVar4;
}

