
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::DesktopCubeModelingController+<SetButtonTextureRoutine>d__8::
     DesktopCubeModelingController_SetButtonTextureRoutine_d_8_MoveNext
               (DesktopCubeModelingController_SetButtonTextureRoutine_d_8 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__WaitForSeconds);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  iVar1 = (this->fields).__1__state;
  pDVar2 = (this->fields).__4__this;
  if ((iVar1 == 0) || (iVar1 == 1)) {
    bVar3 = cRam_? == '\0';
    (this->fields).__1__state = -1;
    if (bVar3) {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar4 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if (((pMVar4 != (MVGameControllerBase *)0x0) &&
        (pMVar5 = (pMVar4->fields).game, pMVar5 != (MVNetworkGame *)0x0)) &&
       (pMVar6 = (pMVar5->fields)._MaterialRepository_k__BackingField,
       pMVar6 != (MVMaterialRepository *)0x0)) {
      if ((pMVar6->fields)._IsButtonTexturesInitialized_k__BackingField == 0) {
        pOVar7 = (Object *)FUN_?(TypeInfo__UnityEngine__WaitForSeconds);
        bVar3 = iRam_? != 0;
        *(undefined4 *)&pOVar7[1].klass = 0x3dcccccd;
        (this->fields).__2__current = pOVar7;
        if (bVar3) {
          uVar8 = (uint)((ulonglong)&(this->fields).__2__current >> 0xc);
          uVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6);
          do {
            uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
            puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
            LOCK();
            bVar3 = uVar10 == *puVar11;
            if (bVar3) {
              *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
            }
            UNLOCK();
          } while (!bVar3);
        }
        (this->fields).__1__state = 1;
        return 1;
      }
      bVar3 = iRam_? != 0;
      (this->fields).__2__current = (Object *)0x0;
      if (bVar3) {
        uVar8 = (uint)((ulonglong)&(this->fields).__2__current >> 0xc);
        uVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6);
        do {
          uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
          puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
          LOCK();
          bVar3 = uVar10 == *puVar11;
          if (bVar3) {
            *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
          }
          UNLOCK();
        } while (!bVar3);
      }
      (this->fields).__1__state = 2;
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
      pMVar5 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (((pMVar5 != (MVNetworkGame *)0x0) &&
          (pMVar6 = (pMVar5->fields)._MaterialRepository_k__BackingField,
          pMVar6 != (MVMaterialRepository *)0x0)) &&
         ((pMVar12 = MVMaterialRepository::MVMaterialRepository_GetMaterial
                               (pMVar6,(this->fields).materialId,(MethodInfo *)0x0),
          pMVar12 != (MVMaterial *)0x0 && (this_00 != (RawImage *)0x0)))) {
        UnityEngine.UI.dll::UnityEngine::UI::RawImage::RawImage_set_texture
                  (this_00,(Texture *)(pMVar12->fields)._ButtonTexture_k__BackingField,
                   (MethodInfo *)0x0);
        bVar3 = iRam_? == 0;
        (pDVar2->fields).setButtonTextureRoutine = (IEnumerator *)0x0;
        if (bVar3) {
          return 0;
        }
        uVar8 = (uint)((ulonglong)&(pDVar2->fields).setButtonTextureRoutine >> 0xc);
        uVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6);
        do {
          uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
          puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
          LOCK();
          bVar3 = uVar10 == *puVar11;
          if (bVar3) {
            *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
          }
          UNLOCK();
        } while (!bVar3);
        return 0;
      }
    }
  }
  FUN_?();
  pcVar13 = (code *)swi(3);
  bVar14 = (*pcVar13)();
  return bVar14;
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
  uVar1 = func_?(&
                              MethodInfo__DesktopCubeModelingController___SetButtonTextureRoutine_d__8__System_Collections_IEnumerator_Reset__
                             );
  FUN_?(this_00,uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

