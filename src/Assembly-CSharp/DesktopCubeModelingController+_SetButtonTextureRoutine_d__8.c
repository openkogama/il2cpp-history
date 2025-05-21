
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::DesktopCubeModelingController+<SetButtonTextureRoutine>d__8::
     DesktopCubeModelingController_SetButtonTextureRoutine_d_8_MoveNext
               (DesktopCubeModelingController_SetButtonTextureRoutine_d_8 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__WaitForSeconds);
    cRam_? = '\x01';
  }
  iVar1 = (this->fields).__1__state;
  pDVar2 = (this->fields).__4__this;
  if ((iVar1 == 0) || (iVar1 == 1)) {
    bVar3 = cRam_? == '\0';
    (this->fields).__1__state = -1;
    if (bVar3) {
      func_?(&TypeInfo__MVGameControllerBase);
      cRam_? = '\x01';
    }
    pMVar4 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if (((pMVar4 != (MVGameControllerBase *)0x0) &&
        (pMVar5 = (pMVar4->fields).game, pMVar5 != (MVNetworkGame *)0x0)) &&
       (pMVar6 = (pMVar5->fields)._MaterialRepository_k__BackingField,
       pMVar6 != (MVMaterialRepository *)0x0)) {
      ppOVar7 = &(this->fields).__2__current;
      if ((pMVar6->fields)._IsButtonTexturesInitialized_k__BackingField != 0) {
        (this->fields).__2__current = (Object *)0x0;
        func_?(ppOVar7,0);
        (this->fields).__1__state = 2;
        return 1;
      }
      this_01 = (SubscribableVariable_1_System_Single_ *)
                func_?(TypeInfo__UnityEngine__WaitForSeconds);
      SubscribableVariable`1[System::Single]::SubscribableVariable_1_System_Single___ctor
                (this_01,0.1,(MethodInfo *)0x0);
      (this->fields).__2__current = (Object *)this_01;
      func_?(ppOVar7,this_01);
      (this->fields).__1__state = 1;
      return 1;
    }
  }
  else {
    if (iVar1 != 2) {
      return 0;
    }
    (this->fields).__1__state = -1;
    if (pDVar2 != (DesktopCubeModelingController *)0x0) {
      this_00 = (pDVar2->fields).materialsButtonImage;
      if (cRam_? == '\0') {
        func_?(&TypeInfo__MVGameControllerBase);
        cRam_? = '\x01';
      }
      pMVar4 = TypeInfo__MVGameControllerBase->static_fields->instance;
      if (((pMVar4 != (MVGameControllerBase *)0x0) &&
          (pMVar5 = (pMVar4->fields).game, pMVar5 != (MVNetworkGame *)0x0)) &&
         ((pMVar6 = (pMVar5->fields)._MaterialRepository_k__BackingField,
          pMVar6 != (MVMaterialRepository *)0x0 &&
          ((pMVar8 = MVMaterialRepository::MVMaterialRepository_GetMaterial
                               (pMVar6,(this->fields).materialId,(MethodInfo *)0x0),
           pMVar8 != (MVMaterial *)0x0 && (this_00 != (RawImage *)0x0)))))) {
        UnityEngine.UI.dll::UnityEngine::UI::RawImage::RawImage_set_texture
                  (this_00,(Texture *)(pMVar8->fields)._ButtonTexture_k__BackingField,
                   (MethodInfo *)0x0);
        (pDVar2->fields).setButtonTextureRoutine = (IEnumerator *)0x0;
        func_?(&(pDVar2->fields).setButtonTextureRoutine,0);
        return 0;
      }
    }
  }
  func_?();
  pcVar9 = (code *)swi(3);
  bVar10 = (*pcVar9)();
  return bVar10;
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

