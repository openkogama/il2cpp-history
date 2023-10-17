
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
    fStack_1 = (this->fields).indicationRadius;
    pDVar2 = (this->fields).directionArrowBase;
    numberOfArrows = (this->fields).maxNumberOfArrows;
    pDVar3 = (DamageIndicator_IndicatorArrow *)
             func_?(TypeInfo__DamageIndicator__IndicatorArrow);
    if (pDVar3 != (DamageIndicator_IndicatorArrow *)0x0) {
      if (cRam_? == '\0') {
        func_?(&TypeInfo__DamageIndicator__IndicatorArrow);
        cRam_? = '\x01';
      }
      DamageIndicator+IndicatorArrow::DamageIndicator_IndicatorArrow__ctor_1
                (pDVar3,numberOfArrows,pDVar2,(DamageIndicator_IndicatorArrow *)0x0,
                 (MethodInfo *)0x0);
      TypeInfo__DamageIndicator__IndicatorArrow->static_fields->indicationRadius = fStack_1;
      TypeInfo__DamageIndicator__IndicatorArrow->static_fields->_nextArrow = pDVar3;
      func_?(TypeInfo__DamageIndicator__IndicatorArrow->static_fields,pDVar3);
      (this->fields).directionArrow = pDVar3;
      func_?(&(this->fields).directionArrow,pDVar3);
      pSVar4 = (this->fields).arrowSpriteStream;
      this_01 = (Action_1_Object_ *)func_?(TypeInfo__System__Action<UnityEngine::Sprite>);
      if ((this_01 != (Action_1_Object_ *)0x0) &&
         (mscorlib.dll::System::Action`1[Object]::Action_1_Object___ctor
                    (this_01,(Object *)this,
                     MethodInfo__DamageIndicator__SetArrowSprites_UnityEngine__Sprite_,
                     (MethodInfo *)0x0), pSVar4 != (StreamedSpriteToCallback *)0x0)) {
        (pSVar4->fields)._.onAssetSet = (Action_1_UnityEngine_Sprite_ *)this_01;
        func_?(&(pSVar4->fields)._.onAssetSet,this_01);
        pIVar5 = (this->fields).damageOverlay;
        if (pIVar5 != (Image *)0x0) {
          iVar6 = (*(pIVar5->klass->vtable).get_color.methodPtr)
                            (auStack_7,pIVar5,(pIVar5->klass->vtable).get_color.method);
          pIVar5 = (this->fields).damageOverlay;
          (this->fields).initialAlpha = *(float *)(iVar6 + 0xc);
          if (pIVar5 != (Image *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                      ((Behaviour *)pIVar5,0,(MethodInfo *)0x0);
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
  }
code_?:
  func_?();
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
      (this->fields).directionArrow = pDVar3;
      func_?(&(this->fields).directionArrow,pDVar3);
      this_04 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      id = MVPlayer::MVPlayer_get_WoId(damageDealer,(MethodInfo *)0x0);
      if (this_04 == (MVWorldObjectClientManager *)0x0) goto code_?;
      pMVar4 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                         (this_04,id,(MethodInfo *)0x0);
      if ((pMVar4 == (MVWorldObject *)0x0) ||
         (this_00 = pMVar4[1].fields.inputLinkRefs, this_00 == (List_1_MV_WorldObject_Link_ *)0x0))
      goto code_?;
      bVar5 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeInHierarchy
                        ((GameObject *)this_00,(MethodInfo *)0x0);
      if (bVar5 == 0) {
        fVar6 = (this->fields).durationPerPointOfDamage;
        pDVar3 = (this->fields).directionArrow;
        if (pDVar3 == (DamageIndicator_IndicatorArrow *)0x0) goto code_?;
        pTVar7 = (Transform *)pMVar4[1].fields.ownerActorNr;
        (pDVar3->fields).damageOrigin = pTVar7;
        func_?(&(pDVar3->fields).damageOrigin,pTVar7);
        this_01 = (pDVar3->fields).arrow;
        (pDVar3->fields).timer = fVar6 * damageAmount;
        if (this_01 == (DamageArrow *)0x0) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                  ((Behaviour *)this_01,1,(MethodInfo *)0x0);
        (pDVar3->fields).idle = 0;
      }
    }
  }
  if ((undefined1)damageType != PlayerKilledByType__Enum_Environmental) {
    fVar8 = damageAmount * (this->fields).durationPerPointOfDamage;
    this_02 = (this->fields).damageOverlay;
    fVar6 = (this->fields).damageOverlayTimer;
    if (fVar6 <= fVar8) {
      fVar6 = fVar8;
    }
    (this->fields).damageOverlayTimer = fVar6;
    if (this_02 == (Image *)0x0) {
code_?:
      func_?();
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
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
    if ((this->fields).damageOverlayTimer <= 0.0) {
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
                             (this_02,(this->fields).damageOverlayTimer /
                                      (this->fields).timeNormalizationFactor,(MethodInfo *)0x0);
        pIVar4 = (this->fields).damageOverlay;
        fStack_6 = (this->fields).initialAlpha;
        if (pIVar4 != (Image *)0x0) {
          puVar7 = (undefined4 *)
                   (*(pIVar4->klass->vtable).get_color.methodPtr)
                             (&uStack_8,pIVar4,(pIVar4->klass->vtable).get_color.method);
          uStack_8 = *puVar7;
          uStack_9 = puVar7[1];
          uStack_10 = puVar7[2];
          fStack_6 = fStack_6 * fStack_5;
          (*(pIVar4->klass->vtable).set_color.methodPtr)
                    (pIVar4,uStack_8,uStack_9,uStack_10,fStack_6,
                     (pIVar4->klass->vtable).set_color.method);
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

