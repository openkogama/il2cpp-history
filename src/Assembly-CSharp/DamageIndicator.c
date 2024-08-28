
/* Void Awake() */

void Assembly-CSharp.dll::DamageIndicator::DamageIndicator_Awake
               (DamageIndicator *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<UnityEngine::Sprite>);
    func_?(&MethodInfo__DamageIndicator__SetArrowSprites_UnityEngine__Sprite_);
    func_?(&TypeInfo__DamageIndicator__IndicatorArrow);
    cRam_? = '\x01';
  }
  (this->fields).timeNormalizationFactor = (this->fields).durationPerPointOfDamage * _UNK_?;
  this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                      ((Component *)this,(MethodInfo *)0x0);
  if (this_00 != (Transform *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
              (this_00,(Transform *)0x0,0,(MethodInfo *)0x0);
    fVar1 = (this->fields).indicationRadius;
    arrowBase = (this->fields).directionArrowBase;
    numberOfArrows = (this->fields).maxNumberOfArrows;
    this_01 = (DamageIndicator_IndicatorArrow *)
              func_?(TypeInfo__DamageIndicator__IndicatorArrow);
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    DamageIndicator+IndicatorArrow::DamageIndicator_IndicatorArrow__ctor_1
              (this_01,numberOfArrows,arrowBase,(DamageIndicator_IndicatorArrow *)0x0,
               (MethodInfo *)0x0);
    TypeInfo__DamageIndicator__IndicatorArrow->static_fields->indicationRadius = fVar1;
    TypeInfo__DamageIndicator__IndicatorArrow->static_fields->_nextArrow = this_01;
    func_?();
    ppDVar2 = &(this->fields).directionArrow;
    *ppDVar2 = this_01;
    func_?(ppDVar2);
    pSVar3 = (this->fields).arrowSpriteStream;
    this_02 = (DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
               *)func_?(TypeInfo__System__Action<UnityEngine::Sprite>);
    DictionaryWithChangeEvent`2[TKey,TValue]+OnDictionaryChangeDelegate[Unity::IL2CPP::Metadata::
    __Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::
    DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
              (this_02,(Object *)this,
               MethodInfo__DamageIndicator__SetArrowSprites_UnityEngine__Sprite_,(MethodInfo *)0x0);
    if (pSVar3 != (StreamedSpriteToCallback *)0x0) {
      ppAVar4 = &(pSVar3->fields)._.onAssetSet;
      *ppAVar4 = (Action_1_UnityEngine_Sprite_ *)this_02;
      func_?(ppAVar4);
      pIVar5 = (this->fields).damageOverlay;
      if (pIVar5 != (Image *)0x0) {
        iVar6 = (*(code *)(pIVar5->klass->vtable).get_color.method)(&stack0xffffffe8,pIVar5);
        (this->fields).initialAlpha = *(float *)(iVar6 + 0xc);
        DamageIndicator_ResetIndicators(this,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void ResetIndicators() */

void Assembly-CSharp.dll::DamageIndicator::DamageIndicator_ResetIndicators
               (DamageIndicator *this,MethodInfo *method)

{
  this_00 = (this->fields).damageOverlay;
  if (this_00 != (Image *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
              ((Behaviour *)this_00,0,(MethodInfo *)0x0);
    pDVar1 = (this->fields).directionArrow;
    if (pDVar1 != (DamageIndicator_IndicatorArrow *)0x0) {
      for (pDVar2 = (pDVar1->fields).nextArrow; pDVar2 != pDVar1;
          pDVar2 = (pDVar2->fields).nextArrow) {
        if ((pDVar2 == (DamageIndicator_IndicatorArrow *)0x0) ||
           (pDVar3 = (pDVar2->fields).arrow, pDVar3 == (DamageArrow *)0x0)) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                  ((Behaviour *)pDVar3,0,(MethodInfo *)0x0);
        (pDVar2->fields).idle = 1;
      }
      pDVar3 = (pDVar1->fields).arrow;
      if (pDVar3 != (DamageArrow *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                  ((Behaviour *)pDVar3,0,(MethodInfo *)0x0);
        return;
      }
    }
  }
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void SetArrowSprites(Sprite) */

void Assembly-CSharp.dll::DamageIndicator::DamageIndicator_SetArrowSprites
               (DamageIndicator *this,Sprite *sprite,MethodInfo *method)

{
  iVar1 = 0;
  if (0 < (this->fields).maxNumberOfArrows) {
    ppDVar2 = &(this->fields).directionArrow;
    do {
      if (((*ppDVar2 == (DamageIndicator_IndicatorArrow *)0x0) ||
          (pDVar3 = ((*ppDVar2)->fields).arrow, pDVar3 == (DamageArrow *)0x0)) ||
         (this_00 = (pDVar3->fields).image, this_00 == (Image *)0x0)) {
code_?:
        func_?();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      UnityEngine.UI.dll::UnityEngine::UI::Image::Image_set_sprite(this_00,sprite,(MethodInfo *)0x0)
      ;
      if (cRam_? == '\0') {
        func_?(&TypeInfo__DamageIndicator__IndicatorArrow);
        cRam_? = '\x01';
      }
      pDVar5 = TypeInfo__DamageIndicator__IndicatorArrow->static_fields->_nextArrow;
      if (pDVar5 == (DamageIndicator_IndicatorArrow *)0x0) goto code_?;
      pDVar5 = (pDVar5->fields).nextArrow;
      TypeInfo__DamageIndicator__IndicatorArrow->static_fields->_nextArrow = pDVar5;
      func_?(TypeInfo__DamageIndicator__IndicatorArrow->static_fields,pDVar5);
      pDVar5 = TypeInfo__DamageIndicator__IndicatorArrow->static_fields->_nextArrow;
      *ppDVar2 = pDVar5;
      func_?(ppDVar2,pDVar5);
      iVar1 = iVar1 + 1;
    } while (iVar1 < (this->fields).maxNumberOfArrows);
  }
  return;
}


/* Void ShowDamage(Single, MVPlayer, PlayerKilledByType) */

void Assembly-CSharp.dll::DamageIndicator::DamageIndicator_ShowDamage
               (DamageIndicator *this,float damageAmount,MVPlayer *damageDealer,
               PlayerKilledByType__Enum damageType,MethodInfo *method)

{
  if (damageDealer != (MVPlayer *)0x0) {
    iVar1 = (damageDealer->fields)._ActorNr_k__BackingField;
    this_03 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (this_03 == (MVNetworkGame *)0x0) goto code_?;
    pMVar2 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_03,(MethodInfo *)0x0);
    if (pMVar2 == (MVLocalPlayer *)0x0) goto code_?;
    if (iVar1 != (pMVar2->fields)._._ActorNr_k__BackingField) {
      pDVar3 = DamageIndicator+IndicatorArrow::DamageIndicator_IndicatorArrow_get_NextArrow
                         ((MethodInfo *)0x0);
      ppDVar4 = &(this->fields).directionArrow;
      *ppDVar4 = pDVar3;
      func_?(ppDVar4,pDVar3);
      this_04 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      id = MVPlayer::MVPlayer_get_WoId(damageDealer,(MethodInfo *)0x0);
      if (this_04 == (MVWorldObjectClientManager *)0x0) goto code_?;
      pMVar5 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                         (this_04,id,(MethodInfo *)0x0);
      if ((pMVar5 == (MVWorldObject *)0x0) ||
         (this_00 = pMVar5[1].fields.inputLinkRefs, this_00 == (List_1_MV_WorldObject_Link_ *)0x0))
      goto code_?;
      bVar6 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeInHierarchy
                        ((GameObject *)this_00,(MethodInfo *)0x0);
      if (bVar6 == 0) {
        fVar7 = (this->fields).durationPerPointOfDamage;
        pDVar3 = (this->fields).directionArrow;
        if (pDVar3 == (DamageIndicator_IndicatorArrow *)0x0) goto code_?;
        pTVar8 = (Transform *)pMVar5[1].fields.ownerActorNr;
        ppTVar9 = &(pDVar3->fields).damageOrigin;
        *ppTVar9 = pTVar8;
        func_?(ppTVar9,pTVar8);
        this_01 = (pDVar3->fields).arrow;
        (pDVar3->fields).timer = fVar7 * damageAmount;
        if (this_01 == (DamageArrow *)0x0) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                  ((Behaviour *)this_01,1,(MethodInfo *)0x0);
        (pDVar3->fields).idle = 0;
      }
    }
  }
  if ((undefined1)damageType != PlayerKilledByType__Enum_Environmental) {
    fVar10 = (this->fields).durationPerPointOfDamage * damageAmount;
    this_02 = (this->fields).damageOverlay;
    fVar7 = (this->fields).damageOverlayTimer;
    if (fVar7 <= fVar10) {
      fVar7 = fVar10;
    }
    (this->fields).damageOverlayTimer = fVar7;
    if (this_02 == (Image *)0x0) {
code_?:
      func_?();
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
              ((Behaviour *)this_02,1,(MethodInfo *)0x0);
  }
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::DamageIndicator::DamageIndicator_Update
               (DamageIndicator *this,MethodInfo *method)

{
  this_00 = (this->fields).directionArrow;
  if (this_00 != (DamageIndicator_IndicatorArrow *)0x0) {
    for (this_01 = (this_00->fields).nextArrow; this_01 != this_00;
        this_01 = (this_01->fields).nextArrow) {
      if (this_01 == (DamageIndicator_IndicatorArrow *)0x0) goto code_?;
      if ((this_01->fields).idle == 0) {
        fVar1 = (this_01->fields).timer;
        fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                          ((MethodInfo *)0x0);
        fVar1 = fVar1 - fVar2;
        pDVar3 = (this_01->fields).arrow;
        (this_01->fields).timer = fVar1;
        (this_01->fields).idle = fVar1 <= 0.0;
        if (pDVar3 == (DamageArrow *)0x0) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                  ((Behaviour *)pDVar3,fVar1 > 0.0,(MethodInfo *)0x0);
        DamageIndicator+IndicatorArrow::DamageIndicator_IndicatorArrow_UpdateArrowPosition
                  (this_01,(MethodInfo *)0x0);
      }
    }
    if ((this_00->fields).idle == 0) {
      fVar1 = (this_00->fields).timer;
      fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0)
      ;
      fVar1 = fVar1 - fVar2;
      pDVar3 = (this_00->fields).arrow;
      (this_00->fields).timer = fVar1;
      (this_00->fields).idle = fVar1 <= 0.0;
      if (pDVar3 == (DamageArrow *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                ((Behaviour *)pDVar3,fVar1 > 0.0,(MethodInfo *)0x0);
      DamageIndicator+IndicatorArrow::DamageIndicator_IndicatorArrow_UpdateArrowPosition
                (this_00,(MethodInfo *)0x0);
    }
    fVar1 = (this->fields).damageOverlayTimer;
    if (fVar1 <= 0.0) {
      pIVar4 = (this->fields).damageOverlay;
      if (pIVar4 != (Image *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                  ((Behaviour *)pIVar4,0,(MethodInfo *)0x0);
        return;
      }
    }
    else {
      this_02 = (this->fields).fade;
      if (this_02 != (AnimationCurve *)0x0) {
        fStack_5 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate
                             (this_02,fVar1 / (this->fields).timeNormalizationFactor,
                              (MethodInfo *)0x0);
        pIVar4 = (this->fields).damageOverlay;
        fStack_6 = (this->fields).initialAlpha;
        if (pIVar4 != (Image *)0x0) {
          puVar7 = (undefined4 *)
                   (*(code *)(pIVar4->klass->vtable).get_color.method)
                             (&uStack_8,pIVar4,(pIVar4->klass->vtable).set_color.methodPtr);
          uStack_8 = *puVar7;
          uStack_9 = puVar7[1];
          uStack_10 = puVar7[2];
          fStack_6 = fStack_6 * fStack_5;
          (*(code *)(pIVar4->klass->vtable).set_color.method)
                    (pIVar4,uStack_8,uStack_9,uStack_10,fStack_6,
                     (pIVar4->klass->vtable).get_raycastTarget.methodPtr);
          fVar1 = (this->fields).damageOverlayTimer;
          fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                            ((MethodInfo *)0x0);
          (this->fields).damageOverlayTimer = fVar1 - fVar2;
          return;
        }
      }
    }
  }
code_?:
  func_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* DamageIndicator() */

void Assembly-CSharp.dll::DamageIndicator::DamageIndicator__ctor
               (DamageIndicator *this,MethodInfo *method)

{
  (this->fields).indicationRadius = 35.0;
  (this->fields).durationPerPointOfDamage = 0.03;
  (this->fields).maxNumberOfArrows = 3;
  (this->fields).damageOverlayTimer = -INFINITY;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  return;
}

