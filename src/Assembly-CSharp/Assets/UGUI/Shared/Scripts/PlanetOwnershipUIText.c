
/* Void Awake() */

void Assembly-CSharp.dll::Assets::UGUI::Shared::Scripts::PlanetOwnershipUIText::
     PlanetOwnershipUIText_Awake(PlanetOwnershipUIText *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__RectTransform);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((((pMVar1 != (MVGameControllerBase *)0x0) &&
       (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
      (pMVar3 = (pMVar2->fields).playerContainer, pMVar3 != (MVPlayerContainer *)0x0)) &&
     (pMVar4 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(pMVar3,(MethodInfo *)0x0),
     pMVar4 != (MVLocalPlayer *)0x0)) {
    MVLocalPlayer::MVLocalPlayer_get_PlanetPermissions(pMVar4,(MethodInfo *)0x0);
    pTVar5 = (this->fields).text;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if (((pMVar1 != (MVGameControllerBase *)0x0) &&
        (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
       ((pMVar3 = (pMVar2->fields).playerContainer, pMVar3 != (MVPlayerContainer *)0x0 &&
        (pMVar4 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(pMVar3,(MethodInfo *)0x0),
        pMVar4 != (MVLocalPlayer *)0x0)))) {
      planetPermissionTypes =
           MVLocalPlayer::MVLocalPlayer_get_PlanetPermissions(pMVar4,(MethodInfo *)0x0);
      pSVar6 = MVCommon.dll::MV::Common::MVEnumsExtensions::MVEnumsExtensions_ToTitle
                         (planetPermissionTypes,(MethodInfo *)0x0);
      if (pTVar5 != (Text *)0x0) {
        (*(pTVar5->klass->vtable).set_text.methodPtr)
                  (pTVar5,pSVar6,(pTVar5->klass->vtable).set_text.method);
        pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                           ((Component *)this,(MethodInfo *)0x0);
        pTVar5 = (this->fields).text;
        if (((pTVar5 != (Text *)0x0) &&
            (lVar8 = (*(pTVar5->klass->vtable).get_text.methodPtr)
                               (pTVar5,(pTVar5->klass->vtable).get_text.method), lVar8 != 0)) &&
           (pTVar7 != (Transform *)0x0)) {
          pTVar9 = (Transform *)0x0;
          if (pTVar7->klass == (Transform__Class *)TypeInfo__UnityEngine__RectTransform) {
            pTVar9 = pTVar7;
          }
          if (pTVar9 == (Transform *)0x0) {
            FUN_?(pTVar7);
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          pTVar9 = (Transform *)0x0;
          if (pTVar7->klass == (Transform__Class *)TypeInfo__UnityEngine__RectTransform) {
            pTVar9 = pTVar7;
          }
          fVar11 = (float)*(int *)(lVar8 + 0x10) * _UNK_?;
          VVar12 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
                   RectTransform_get_sizeDelta((RectTransform *)pTVar9,(MethodInfo *)0x0);
          fStackX_1c = VVar12.y;
          VVar12 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
                   RectTransform_GetParentSize((RectTransform *)pTVar9,(MethodInfo *)0x0);
          VVar13 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
                   RectTransform_get_anchorMax((RectTransform *)pTVar9,(MethodInfo *)0x0);
          VVar14 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
                   RectTransform_get_anchorMin((RectTransform *)pTVar9,(MethodInfo *)0x0);
          fStackX_18 = VVar13.x;
          fStackX_20 = VVar14.x;
          fStack_15 = VVar12.x;
          auStack_16[0] = CONCAT44(fStackX_1c,fVar11 - (fStackX_18 - fStackX_20) * fStack_15);
          if (cRam_? == '\0') {
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::RectTransform>_UnityEngine__RectTransform_
                          ,auStack_16[0],0);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if (pTVar9 == (Transform *)0x0) {
            FUN_?();
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          pvVar17 = (pTVar9->fields)._._.m_CachedPtr;
          if (pvVar17 == (void *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
            ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar9,(MethodInfo *)0x0);
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          pcVar10 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar10 = (code *)FUN_?(&UNK_?), pcVar10 == (code *)0x0)) {
            uVar18 = func_?(&UNK_?);
            FUN_?(uVar18,0);
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          pcRam_? = pcVar10;
          (*pcRam_?)(pvVar17,auStack_16);
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}

