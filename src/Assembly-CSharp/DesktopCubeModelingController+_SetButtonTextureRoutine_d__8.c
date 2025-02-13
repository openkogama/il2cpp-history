
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::DesktopCubeModelingController+<SetButtonTextureRoutine>d__8::
     DesktopCubeModelingController_SetButtonTextureRoutine_d_8_MoveNext
               (DesktopCubeModelingController_SetButtonTextureRoutine_d_8 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__WaitForSeconds);
    cRam_? = '\x01';
  }
  cVar1 = cRam_?;
  iVar2 = (this->fields).__1__state;
  pDVar3 = (this->fields).__4__this;
  if ((iVar2 != 0) && (iVar2 != 1)) {
    return 0;
  }
  (this->fields).__1__state = -1;
  if (cVar1 == '\0') {
    func_?(&TypeInfo__MVGameControllerBase);
    cVar1 = '\x01';
    cRam_? = '\x01';
  }
  pMVar4 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (((pMVar4 != (MVGameControllerBase *)0x0) &&
      (pMVar5 = (pMVar4->fields).game, pMVar5 != (MVNetworkGame *)0x0)) &&
     (pMVar6 = (pMVar5->fields)._MaterialRepository_k__BackingField,
     pMVar6 != (MVMaterialRepository *)0x0)) {
    if ((pMVar6->fields)._IsButtonTexturesInitialized_k__BackingField == 0) {
      this_01 = (SubscribableVariable_1_System_Single_ *)
                func_?(TypeInfo__UnityEngine__WaitForSeconds);
      SubscribableVariable`1[System::Single]::SubscribableVariable_1_System_Single___ctor
                (this_01,0.1,(MethodInfo *)0x0);
      (this->fields).__2__current = (Object *)this_01;
      func_?(&(this->fields).__2__current,this_01);
      (this->fields).__1__state = 1;
      return 1;
    }
    if (pDVar3 != (DesktopCubeModelingController *)0x0) {
      this_00 = (pDVar3->fields).materialsButtonImage;
      if (cVar1 == '\0') {
        func_?(&TypeInfo__MVGameControllerBase);
        cRam_? = '\x01';
      }
      pMVar4 = TypeInfo__MVGameControllerBase->static_fields->instance;
      if (((pMVar4 != (MVGameControllerBase *)0x0) &&
          (pMVar5 = (pMVar4->fields).game, pMVar5 != (MVNetworkGame *)0x0)) &&
         (pMVar6 = (pMVar5->fields)._MaterialRepository_k__BackingField,
         pMVar6 != (MVMaterialRepository *)0x0)) {
        pMVar7 = MVMaterialRepository::MVMaterialRepository_GetMaterial
                           (pMVar6,(this->fields).materialId,(MethodInfo *)0x0);
        if ((pMVar7 != (MVMaterial *)0x0) && (this_00 != (RawImage *)0x0)) {
          UnityEngine.UI.dll::UnityEngine::UI::RawImage::RawImage_set_texture
                    (this_00,(Texture *)(pMVar7->fields)._ButtonTexture_k__BackingField,
                     (MethodInfo *)0x0);
          (pDVar3->fields).setButtonTextureRoutine = (IEnumerator *)0x0;
          func_?(&(pDVar3->fields).setButtonTextureRoutine,0);
          return 0;
        }
      }
    }
  }
  func_?();
  pcVar8 = (code *)swi(3);
  bVar9 = (*pcVar8)();
  return bVar9;
}


/* Void System.Collections.IEnumerator.Reset() */

void Assembly-CSharp.dll::DesktopCubeModelingController+<SetButtonTextureRoutine>d__8::
     DesktopCubeModelingController_SetButtonTextureRoutine_d_8_System_Collections_IEnumerator_Reset
               (DesktopCubeModelingController_SetButtonTextureRoutine_d_8 *this,MethodInfo *method)

{
  uVar1 = func_?(&TypeInfo__System__NotSupportedException);
  this_00 = (NotSupportedException *)func_?(uVar1);
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor
            (this_00,(MethodInfo *)0x0);
  func_?(&
                  MethodInfo__DesktopCubeModelingController___SetButtonTextureRoutine_d__8__System_Collections_IEnumerator_Reset__
                 );
  func_?(this_00);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

