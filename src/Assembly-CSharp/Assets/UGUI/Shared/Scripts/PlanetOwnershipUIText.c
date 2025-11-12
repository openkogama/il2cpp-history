
/* Void Awake() */

void Assembly-CSharp.dll::Assets::UGUI::Shared::Scripts::PlanetOwnershipUIText::
     PlanetOwnershipUIText_Awake(PlanetOwnershipUIText *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__RectTransform);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Editor);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Play_Tester);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Owner);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Spectator);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_error);
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
      (this_00 = (pMVar2->fields).playerContainer, this_00 != (MVPlayerContainer *)0x0)) &&
     (this_01 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(this_00,(MethodInfo *)0x0),
     this_01 != (MVLocalPlayer *)0x0)) {
    PVar3 = MVLocalPlayer::MVLocalPlayer_get_PlanetOwnership(this_01,(MethodInfo *)0x0);
    pTVar4 = (this->fields).text;
    PVar3 = PVar3 & 0xff;
    pSVar5 = StringLiteral_Editor;
    if (((PVar3 != PlanetOwnershipType__Enum_Editor) &&
        (pSVar5 = StringLiteral_Owner, PVar3 != PlanetOwnershipType__Enum_Owner)) &&
       ((pSVar5 = StringLiteral_Play_Tester, PVar3 != PlanetOwnershipType__Enum_Playtester &&
        ((pSVar5 = StringLiteral_error, PVar3 != PlanetOwnershipType__Enum_Pending &&
         (PVar3 == PlanetOwnershipType__Enum_Spectator)))))) {
      pSVar5 = StringLiteral_Spectator;
    }
    pSVar5 = TM::TM__(pSVar5,(MethodInfo *)0x0);
    if (pTVar4 != (Text *)0x0) {
      (*(pTVar4->klass->vtable).set_text.methodPtr)
                (pTVar4,pSVar5,(pTVar4->klass->vtable).set_text.method);
      pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                         ((Component *)this,(MethodInfo *)0x0);
      pTVar4 = (this->fields).text;
      if (((pTVar4 != (Text *)0x0) &&
          (lVar7 = (*(pTVar4->klass->vtable).get_text.methodPtr)
                             (pTVar4,(pTVar4->klass->vtable).get_text.method), lVar7 != 0)) &&
         (pTVar6 != (Transform *)0x0)) {
        pTVar8 = (Transform *)0x0;
        if (pTVar6->klass == (Transform__Class *)TypeInfo__UnityEngine__RectTransform) {
          pTVar8 = pTVar6;
        }
        if (pTVar8 == (Transform *)0x0) {
          FUN_?(pTVar6);
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        pTVar8 = (Transform *)0x0;
        if (pTVar6->klass == (Transform__Class *)TypeInfo__UnityEngine__RectTransform) {
          pTVar8 = pTVar6;
        }
        fVar10 = (float)*(int *)(lVar7 + 0x10) * _UNK_?;
        VVar11 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_sizeDelta
                           ((RectTransform *)pTVar8,(MethodInfo *)0x0);
        fStackX_1c = VVar11.y;
        VVar11 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_GetParentSize
                           ((RectTransform *)pTVar8,(MethodInfo *)0x0);
        VVar12 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_anchorMax
                           ((RectTransform *)pTVar8,(MethodInfo *)0x0);
        VVar13 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_anchorMin
                           ((RectTransform *)pTVar8,(MethodInfo *)0x0);
        fStackX_18 = VVar12.x;
        fStackX_20 = VVar13.x;
        fStack_14 = VVar11.x;
        auStack_15[0] = CONCAT44(fStackX_1c,fVar10 - (fStackX_18 - fStackX_20) * fStack_14);
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::RectTransform>_UnityEngine__RectTransform_
                        ,auStack_15[0],0);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (pTVar8 == (Transform *)0x0) {
          FUN_?();
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        pvVar16 = (pTVar8->fields)._._.m_CachedPtr;
        if (pvVar16 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar8,(MethodInfo *)0x0);
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        pcVar9 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar9 = (code *)FUN_?(&UNK_?), pcVar9 == (code *)0x0)) {
          uVar17 = func_?(&UNK_?);
          FUN_?(uVar17,0);
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        pcRam_? = pcVar9;
        (*pcRam_?)(pvVar16,auStack_15);
        return;
      }
    }
  }
  FUN_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}

