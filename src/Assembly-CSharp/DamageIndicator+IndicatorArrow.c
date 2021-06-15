
/* Void InternalReset() */

void Assembly-CSharp.dll::DamageIndicator+IndicatorArrow::
     DamageIndicator_IndicatorArrow_InternalReset
               (DamageIndicator_IndicatorArrow *this,MethodInfo *method)

{
  this_00 = (this->fields).arrow;
  if (this_00 != (DamageArrow *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
              ((Behaviour *)this_00,0,(MethodInfo *)0x0);
    (this->fields).idle = 1;
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void InternalUpdate() */

void Assembly-CSharp.dll::DamageIndicator+IndicatorArrow::
     DamageIndicator_IndicatorArrow_InternalUpdate
               (DamageIndicator_IndicatorArrow *this,MethodInfo *method)

{
  if ((this->fields).idle == 0) {
    fVar1 = (this->fields).timer;
    fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
    fVar1 = fVar1 - fVar2;
    this_00 = (this->fields).arrow;
    (this->fields).timer = fVar1;
    (this->fields).idle = fVar1 <= 0.0;
    if (this_00 == (DamageArrow *)0x0) {
      func_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
              ((Behaviour *)this_00,fVar1 > 0.0,(MethodInfo *)0x0);
    DamageIndicator_IndicatorArrow_UpdateArrowPosition(this,(MethodInfo *)0x0);
  }
  return;
}


/* Void Reset() */

void Assembly-CSharp.dll::DamageIndicator+IndicatorArrow::DamageIndicator_IndicatorArrow_Reset
               (DamageIndicator_IndicatorArrow *this,MethodInfo *method)

{
  for (pDVar1 = (this->fields).nextArrow; pDVar1 != this; pDVar1 = (pDVar1->fields).nextArrow) {
    if ((pDVar1 == (DamageIndicator_IndicatorArrow *)0x0) ||
       (pDVar2 = (pDVar1->fields).arrow, pDVar2 == (DamageArrow *)0x0)) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
              ((Behaviour *)pDVar2,0,(MethodInfo *)0x0);
    (pDVar1->fields).idle = 1;
  }
  pDVar2 = (this->fields).arrow;
  if (pDVar2 != (DamageArrow *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
              ((Behaviour *)pDVar2,0,(MethodInfo *)0x0);
    return;
  }
code_?:
  func_?(0);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void SetSprite(Sprite) */

void Assembly-CSharp.dll::DamageIndicator+IndicatorArrow::DamageIndicator_IndicatorArrow_SetSprite
               (DamageIndicator_IndicatorArrow *this,Sprite *sprite,MethodInfo *method)

{
  pDVar1 = (this->fields).arrow;
  if ((pDVar1 != (DamageArrow *)0x0) && (this_00 = (pDVar1->fields).image, this_00 != (Image *)0x0))
  {
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    bVar2 = UnityEngine.UI.dll::UnityEngine::UI::SetPropertyUtility::SetPropertyUtility_SetClass_8
                      ((AnimationTriggers **)&(this_00->fields).m_Sprite,(AnimationTriggers *)sprite
                       ,
                       bool_MethodInfo__UnityEngine__UI__SetPropertyUtility__SetClass<UnityEngine::Sprite>_UnityEngine__Sprite___UnityEngine__Sprite_
                      );
    if (bVar2 != 0) {
      (*(code *)(this_00->klass->vtable).SetAllDirty.method)(this_00);
      UnityEngine.UI.dll::UnityEngine::UI::Image::Image_TrackSprite(this_00,(MethodInfo *)0x0);
    }
    return;
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void Show(Transform, Single, Single) */

void Assembly-CSharp.dll::DamageIndicator+IndicatorArrow::DamageIndicator_IndicatorArrow_Show
               (DamageIndicator_IndicatorArrow *this,Transform *damageOrigin,float time,
               float indicationRadius,MethodInfo *method)

{
  (this->fields).damageOrigin = damageOrigin;
  this_00 = (this->fields).arrow;
  (this->fields).timer = time;
  if (this_00 != (DamageArrow *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
              ((Behaviour *)this_00,1,(MethodInfo *)0x0);
    (this->fields).idle = 0;
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::DamageIndicator+IndicatorArrow::DamageIndicator_IndicatorArrow_Update
               (DamageIndicator_IndicatorArrow *this,MethodInfo *method)

{
  for (this_00 = (this->fields).nextArrow; this_00 != this; this_00 = (this_00->fields).nextArrow) {
    if (this_00 == (DamageIndicator_IndicatorArrow *)0x0) goto code_?;
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
      DamageIndicator_IndicatorArrow_UpdateArrowPosition(this_00,(MethodInfo *)0x0);
    }
  }
  if ((this->fields).idle == 0) {
    fVar1 = (this->fields).timer;
    fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
    fVar1 = fVar1 - fVar2;
    pDVar3 = (this->fields).arrow;
    (this->fields).timer = fVar1;
    (this->fields).idle = fVar1 <= 0.0;
    if (pDVar3 == (DamageArrow *)0x0) {
code_?:
      func_?(0);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
              ((Behaviour *)pDVar3,fVar1 > 0.0,(MethodInfo *)0x0);
    DamageIndicator_IndicatorArrow_UpdateArrowPosition(this,(MethodInfo *)0x0);
  }
  return;
}


/* Void UpdateArrowPosition() */

void Assembly-CSharp.dll::DamageIndicator+IndicatorArrow::
     DamageIndicator_IndicatorArrow_UpdateArrowPosition
               (DamageIndicator_IndicatorArrow *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  func_?(&fStack_1,0,0x40);
  uStack_2 = 0;
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
  if (this_00 != (MainCameraManager *)0x0) {
    pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                       ((Component_1 *)this_00,(MethodInfo *)0x0);
    if (pTVar3 != (Transform *)0x0) {
      pMVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_worldToLocalMatrix
                         ((Matrix4x4 *)&stack0xffffff38,pTVar3,(MethodInfo *)0x0);
      fStack_1 = pMVar4->m00;
      fStack_5 = pMVar4->m10;
      fStack_6 = pMVar4->m20;
      fStack_7 = pMVar4->m30;
      fStack_8 = pMVar4->m01;
      fStack_9 = pMVar4->m11;
      fStack_10 = pMVar4->m21;
      fStack_11 = pMVar4->m31;
      fStack_12 = pMVar4->m02;
      fStack_13 = pMVar4->m12;
      fStack_14 = pMVar4->m22;
      fStack_15 = pMVar4->m32;
      fStack_16 = pMVar4->m03;
      fStack_17 = pMVar4->m13;
      fStack_18 = pMVar4->m23;
      fStack_19 = pMVar4->m33;
      pTVar3 = (this->fields).damageOrigin;
      if (pTVar3 != (Transform *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                  (&VStack_20,pTVar3,(MethodInfo *)0x0);
        puVar21 = (undefined8 *)func_?();
        VStack_20._0_8_ = *puVar21;
        VStack_20.z = *(float *)(puVar21 + 1);
        func_?();
        uVar22 = func_?();
        VStack_20.z = (float)((ulonglong)uVar22 >> 0x20);
        VStack_20.y = (float)uVar22;
        pDVar23 = (this->fields).arrow;
        if ((pDVar23 != (DamageArrow *)0x0) &&
           (pIVar24 = (pDVar23->fields).image, pIVar24 != (Image *)0x0)) {
          pTVar3 = (Transform *)
                   UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                             ((Graphic *)pIVar24,(MethodInfo *)0x0);
          fStack_25 = 0.0;
          uStack_26 = 0;
          func_?();
          fStack_27 = 0.0;
          uStack_28 = 0;
          func_?();
          if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0
              ) && ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
            func_?(TypeInfo__UnityEngine__Quaternion);
          }
          forward.z = fStack_25;
          forward.x = (float)(undefined4)uStack_26;
          forward.y = (float)uStack_26._4_4_;
          upwards.z = fStack_27;
          upwards.x = (float)(undefined4)uStack_28;
          upwards.y = (float)uStack_28._4_4_;
          pQVar29 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_LookRotation
                             (&QStack_30,forward,upwards,(MethodInfo *)0x0);
          if (pTVar3 != (Transform *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localRotation
                      (pTVar3,*pQVar29,(MethodInfo *)0x0);
            pDVar23 = (this->fields).arrow;
            if ((pDVar23 != (DamageArrow *)0x0) &&
               (pIVar24 = (pDVar23->fields).image, pIVar24 != (Image *)0x0)) {
              this_01 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                                  ((Graphic *)pIVar24,(MethodInfo *)0x0);
              VStack_31.x = 0.0;
              VStack_31.y = 0.0;
              func_?();
              if ((((uint)(TypeInfo__DamageIndicator__IndicatorArrow->vtable).Equals.methodPtr &
                   0x2000000) != 0) &&
                 ((TypeInfo__DamageIndicator__IndicatorArrow->_1).cctor_started == 0)) {
                func_?(TypeInfo__DamageIndicator__IndicatorArrow);
              }
              VStack_20.z = TypeInfo__DamageIndicator__IndicatorArrow->static_fields->
                            indicationRadius;
              if ((((uint)(TypeInfo__UnityEngine__Vector2->vtable).Equals.methodPtr & 0x2000000) !=
                   0) && ((TypeInfo__UnityEngine__Vector2->_1).cctor_started == 0)) {
                func_?(TypeInfo__UnityEngine__Vector2);
              }
              value = UnityEngine.CoreModule.dll::UnityEngine::Vector2::Vector2_op_Multiply_1
                                (VStack_31,VStack_20.z,(MethodInfo *)0x0);
              if (this_01 != (RectTransform *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
                RectTransform_set_anchoredPosition(this_01,value,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar32 = (code *)swi(3);
  (*pcVar32)();
  return;
}


/* DamageIndicator+IndicatorArrow(Int32, DamageArrow, Single) */

void Assembly-CSharp.dll::DamageIndicator+IndicatorArrow::DamageIndicator_IndicatorArrow__ctor
               (DamageIndicator_IndicatorArrow *this,int32_t numberOfArrows,DamageArrow *arrowBase,
               float indicationRadius,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  DamageIndicator_IndicatorArrow__ctor_1
            (this,numberOfArrows,arrowBase,(DamageIndicator_IndicatorArrow *)0x0,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__DamageIndicator__IndicatorArrow->vtable).Equals.methodPtr & 0x2000000) != 0
      ) && ((TypeInfo__DamageIndicator__IndicatorArrow->_1).cctor_started == 0)) {
    func_?();
  }
  pDVar1 = TypeInfo__DamageIndicator__IndicatorArrow->static_fields;
  pDVar1->_nextArrow = this;
  pDVar1->indicationRadius = indicationRadius;
  return;
}


/* DamageIndicator+IndicatorArrow(Int32, DamageArrow, DamageIndicator+IndicatorArrow) */

void Assembly-CSharp.dll::DamageIndicator+IndicatorArrow::DamageIndicator_IndicatorArrow__ctor_1
               (DamageIndicator_IndicatorArrow *this,int32_t numberOfArrows,DamageArrow *arrowBase,
               DamageIndicator_IndicatorArrow *firstArrow,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields).idle = 1;
  ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,unaff_EDI);
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  this_00 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                      ((XpBoostParticlePreviewer *)arrowBase,
                       DamageArrow_MethodInfo__UnityEngine__Object__Instantiate<DamageArrow>_DamageArrow_
                      );
  (this->fields).arrow = (DamageArrow *)this_00;
  if ((((this_00 != (XpBoostParticlePreviewer *)0x0) &&
       (this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                            ((Component_1 *)this_00,(MethodInfo *)0x0),
       arrowBase != (DamageArrow *)0x0)) &&
      (pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                          ((Component_1 *)arrowBase,(MethodInfo *)0x0), pTVar1 != (Transform *)0x0))
     && (pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetParent
                            (pTVar1,(MethodInfo *)0x0), this_01 != (Transform *)0x0)) {
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
              (this_01,pTVar1,0,(MethodInfo *)0x0);
    numberOfArrows_00 = (undefined1 *)((int)&this_01[-1].fields._._.m_CachedPtr + 3);
    if (numberOfArrows_00 == (undefined1 *)0x0) {
      (this->fields).nextArrow = this;
      return;
    }
    pDStack2 = TypeInfo__DamageIndicator__IndicatorArrow;
    this_02 = (DamageIndicator_IndicatorArrow *)func_?();
    DamageIndicator_IndicatorArrow__ctor_1
              (this_02,(int32_t)numberOfArrows_00,arrowBase,this,(MethodInfo *)0x0);
    (this->fields).nextArrow = this_02;
    return;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* DamageIndicator+IndicatorArrow get_NextArrow() */

DamageIndicator_IndicatorArrow *
Assembly-CSharp.dll::DamageIndicator+IndicatorArrow::DamageIndicator_IndicatorArrow_get_NextArrow
          (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__DamageIndicator__IndicatorArrow->vtable).Equals.methodPtr & 0x2000000) != 0
      ) && ((TypeInfo__DamageIndicator__IndicatorArrow->_1).cctor_started == 0)) {
    func_?(TypeInfo__DamageIndicator__IndicatorArrow);
  }
  pDVar1 = TypeInfo__DamageIndicator__IndicatorArrow->static_fields->_nextArrow;
  if (pDVar1 != (DamageIndicator_IndicatorArrow *)0x0) {
    TypeInfo__DamageIndicator__IndicatorArrow->static_fields->_nextArrow =
         (pDVar1->fields).nextArrow;
    return TypeInfo__DamageIndicator__IndicatorArrow->static_fields->_nextArrow;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  pDVar1 = (DamageIndicator_IndicatorArrow *)(*pcVar2)();
  return pDVar1;
}

