
/* Void Awake() */

void Assembly-CSharp.dll::DamageIndicator::DamageIndicator_Awake
               (DamageIndicator *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields).timeNormalizationFactor = (this->fields).durationPerPointOfDamage * _UNK_?;
  this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                      ((Component_1 *)this,(MethodInfo *)0x0);
  if (this_00 != (Transform *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
              (this_00,(Transform *)0x0,0,(MethodInfo *)0x0);
    fVar1 = (this->fields).indicationRadius;
    pDVar2 = (this->fields).directionArrowBase;
    numberOfArrows = (this->fields).maxNumberOfArrows;
    pDVar3 = (DamageIndicator_IndicatorArrow *)
             func_?(TypeInfo__DamageIndicator__IndicatorArrow);
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    DamageIndicator+IndicatorArrow::DamageIndicator_IndicatorArrow__ctor_1
              (pDVar3,numberOfArrows,pDVar2,(DamageIndicator_IndicatorArrow *)0x0,(MethodInfo *)0x0)
    ;
    if ((((uint)(TypeInfo__DamageIndicator__IndicatorArrow->vtable).Equals.methodPtr & 0x2000000) !=
         0) && ((TypeInfo__DamageIndicator__IndicatorArrow->_1).cctor_started == 0)) {
      func_?();
    }
    pDVar4 = TypeInfo__DamageIndicator__IndicatorArrow->static_fields;
    pDVar4->indicationRadius = fVar1;
    pDVar4->_nextArrow = pDVar3;
    (this->fields).directionArrow = pDVar3;
    pSVar5 = (this->fields).arrowSpriteStream;
    this_01 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_01,(Object *)this,
               MethodInfo__DamageIndicator__SetArrowSprites_UnityEngine__Sprite_,
               MethodInfo__System__Action<UnityEngine::Sprite>__Action_System__Object__void__);
    if (pSVar5 != (StreamedSpriteToCallback *)0x0) {
      (pSVar5->fields)._.onAssetSet = (Action_1_UnityEngine_Sprite_ *)this_01;
      pIVar6 = (this->fields).damageOverlay;
      if (pIVar6 != (Image *)0x0) {
        iVar7 = (*(code *)(pIVar6->klass->vtable).get_color.method)
                          (&stack0xffffffe8,pIVar6,(pIVar6->klass->vtable).set_color.methodPtr);
        pIVar6 = (this->fields).damageOverlay;
        (this->fields).initialAlpha = *(float *)(iVar7 + 0xc);
        if (pIVar6 != (Image *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                    ((Behaviour *)pIVar6,0,(MethodInfo *)0x0);
          pDVar3 = (this->fields).directionArrow;
          if (pDVar3 != (DamageIndicator_IndicatorArrow *)0x0) {
            for (pDVar8 = (pDVar3->fields).nextArrow; pDVar8 != pDVar3;
                pDVar8 = (pDVar8->fields).nextArrow) {
              if ((pDVar8 == (DamageIndicator_IndicatorArrow *)0x0) ||
                 (pDVar2 = (pDVar8->fields).arrow, pDVar2 == (DamageArrow *)0x0))
              goto code_?;
              UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                        ((Behaviour *)pDVar2,0,(MethodInfo *)0x0);
              (pDVar8->fields).idle = 1;
            }
            pDVar2 = (pDVar3->fields).arrow;
            if (pDVar2 != (DamageArrow *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                        ((Behaviour *)pDVar2,0,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
code_?:
  func_?(0);
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
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
  func_?(0);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void SetArrowSprites(Sprite) */

void Assembly-CSharp.dll::DamageIndicator::DamageIndicator_SetArrowSprites
               (DamageIndicator *this,Sprite *sprite,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  iVar1 = 0;
  if (0 < (this->fields).maxNumberOfArrows) {
    do {
      pDVar2 = (this->fields).directionArrow;
      if (((pDVar2 == (DamageIndicator_IndicatorArrow *)0x0) ||
          (pDVar3 = (pDVar2->fields).arrow, pDVar3 == (DamageArrow *)0x0)) ||
         (this_00 = (pDVar3->fields).image, this_00 == (Image *)0x0)) {
        func_?(0);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      UnityEngine.UI.dll::UnityEngine::UI::Image::Image_set_sprite(this_00,sprite,(MethodInfo *)0x0)
      ;
      if ((((uint)(TypeInfo__DamageIndicator__IndicatorArrow->vtable).Equals.methodPtr & 0x2000000)
           != 0) && ((TypeInfo__DamageIndicator__IndicatorArrow->_1).cctor_started == 0)) {
        func_?(TypeInfo__DamageIndicator__IndicatorArrow);
      }
      pDVar2 = DamageIndicator+IndicatorArrow::DamageIndicator_IndicatorArrow_get_NextArrow
                         ((MethodInfo *)0x0);
      iVar1 = iVar1 + 1;
      (this->fields).directionArrow = pDVar2;
    } while (iVar1 < (this->fields).maxNumberOfArrows);
  }
  return;
}


/* Void ShowDamage(Single, MVPlayer, PlayerKilledByType) */

void Assembly-CSharp.dll::DamageIndicator::DamageIndicator_ShowDamage
               (DamageIndicator *this,float damageAmount,MVPlayer *damageDealer,
               PlayerKilledByType__Enum damageType,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (damageDealer != (MVPlayer *)0x0) {
    pSVar1 = ThemeAttributes::NamedThemeAttribute`1[UnityEngine::Color]::
             NamedThemeAttribute_1_UnityEngine_Color__get_Name
                       ((NamedThemeAttribute_1_UnityEngine_Color_ *)damageDealer,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    this_01 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (this_01 == (MVNetworkGame *)0x0) goto code_?;
    this_02 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_01,(MethodInfo *)0x0);
    if (this_02 == (MVLocalPlayer *)0x0) goto code_?;
    pSVar2 = ThemeAttributes::NamedThemeAttribute`1[UnityEngine::Color]::
             NamedThemeAttribute_1_UnityEngine_Color__get_Name
                       ((NamedThemeAttribute_1_UnityEngine_Color_ *)this_02,(MethodInfo *)0x0);
    if (pSVar1 != pSVar2) {
      if ((((uint)(TypeInfo__DamageIndicator__IndicatorArrow->vtable).Equals.methodPtr & 0x2000000)
           != 0) && ((TypeInfo__DamageIndicator__IndicatorArrow->_1).cctor_started == 0)) {
        func_?();
      }
      pDVar3 = DamageIndicator+IndicatorArrow::DamageIndicator_IndicatorArrow_get_NextArrow
                         ((MethodInfo *)0x0);
      (this->fields).directionArrow = pDVar3;
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        damageAmount = (float)TypeInfo__MVGameControllerBase;
        func_?();
      }
      this_03 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      id = MVPlayer::MVPlayer_get_WoId(damageDealer,(MethodInfo *)0x0);
      if (this_03 == (MVWorldObjectClientManager *)0x0) goto code_?;
      this_04 = (PrefabPool *)
                MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                          (this_03,id,(MethodInfo *)0x0);
      if (this_04 == (PrefabPool *)0x0) goto code_?;
      this_05 = DayNightCycle::DayNightCycle_get_CurrentMoonParam
                          ((DayNightCycle *)this_04,(MethodInfo *)0x0);
      if (this_05 == (CelestialParam *)0x0) goto code_?;
      bVar4 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeInHierarchy
                        ((GameObject *)this_05,(MethodInfo *)0x0);
      if (bVar4 == 0) {
        pDVar3 = (this->fields).directionArrow;
        pMVar5 = PrefabPool::PrefabPool_get_MVPointLightPrefab(this_04,(MethodInfo *)0x0);
        fVar6 = (this->fields).durationPerPointOfDamage;
        if (pDVar3 == (DamageIndicator_IndicatorArrow *)0x0) goto code_?;
        (pDVar3->fields).damageOrigin = (Transform *)pMVar5;
        damageAmount = (float)(pDVar3->fields).arrow;
        (pDVar3->fields).timer = fVar6 * 0.0;
        if ((DamageArrow *)damageAmount == (DamageArrow *)0x0) goto code_?;
        damageType._0_1_ = PlayerKilledByType__Enum_None;
        UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                  ((Behaviour *)damageAmount,1,(MethodInfo *)0x0);
        (pDVar3->fields).idle = 0;
      }
    }
  }
  if ((undefined1)damageType != PlayerKilledByType__Enum_Environmental) {
    fVar6 = (this->fields).damageOverlayTimer;
    fVar7 = (this->fields).durationPerPointOfDamage;
    if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
      func_?();
    }
    fVar6 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Max
                      (fVar6,fVar7 * damageAmount,(MethodInfo *)0x0);
    this_00 = (this->fields).damageOverlay;
    (this->fields).damageOverlayTimer = fVar6;
    if (this_00 == (Image *)0x0) {
code_?:
      func_?();
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
              ((Behaviour *)this_00,1,(MethodInfo *)0x0);
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
  func_?(0);
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  return;
}

