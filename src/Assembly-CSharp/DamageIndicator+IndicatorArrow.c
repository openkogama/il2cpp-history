
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
  func_?();
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
      func_?(&TypeInfo__UnityEngine__Object);
      cRam_? = '\x01';
    }
    pSVar2 = (this_00->fields).m_Sprite;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                      ((Object_1 *)pSVar2,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar3 == 0) {
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                        ((Object_1 *)sprite,(Object_1 *)0x0,(MethodInfo *)0x0);
      if (bVar3 == 0) {
        return;
      }
      if (sprite != (Sprite *)0x0) {
        pRVar4 = UnityEngine.CoreModule.dll::UnityEngine::Sprite::Sprite_get_rect
                           ((Rect *)&stack0xffffffb0,sprite,(MethodInfo *)0x0);
        auStack_5._0_4_ = pRVar4->m_XMin;
        auStack_5._4_4_ = pRVar4->m_YMin;
        auStack_5._8_4_ = pRVar4->m_Width;
        pTStack_6 = (Texture2D *)pRVar4->m_Height;
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        fVar7 = (float)auStack_5._8_4_ -
                (TypeInfo__UnityEngine__Vector2->static_fields->zeroVector).x;
        fVar8 = (float)pTStack_6 - (TypeInfo__UnityEngine__Vector2->static_fields->zeroVector).y;
        (this_00->fields)._._.m_SkipLayoutUpdate = fVar8 * fVar8 + fVar7 * fVar7 < _UNK_?;
        pTStack_9 = UnityEngine.CoreModule.dll::UnityEngine::Sprite::Sprite_get_texture
                               (sprite,(MethodInfo *)0x0);
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        pTVar10 = pTStack_9;
        y = (Texture2D *)0x0;
code_?:
        bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                          ((Object_1 *)pTVar10,(Object_1 *)y,(MethodInfo *)0x0);
        (this_00->fields)._._.m_SkipMaterialUpdate = bVar3;
        (this_00->fields).m_Sprite = sprite;
        func_?();
        UnityEngine.UI.dll::UnityEngine::UI::Image::
        Image__set_sprite_g__ResetAlphaHitThresholdIfNeeded_11_0(this_00,(MethodInfo *)0x0);
        (*(code *)(this_00->klass->vtable).SetAllDirty.method)();
        UnityEngine.UI.dll::UnityEngine::UI::Image::Image_TrackSprite(this_00,(MethodInfo *)0x0);
        return;
      }
    }
    else {
      pTStack_9 = (Texture2D *)(this_00->fields).m_Sprite;
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                        ((Object_1 *)pTStack_9,(Object_1 *)sprite,(MethodInfo *)0x0);
      if (bVar3 == 0) {
        return;
      }
      pSVar2 = (this_00->fields).m_Sprite;
      if (pSVar2 != (Sprite *)0x0) {
        pRVar4 = UnityEngine.CoreModule.dll::UnityEngine::Sprite::Sprite_get_rect
                           ((Rect *)&stack0xffffffb0,pSVar2,(MethodInfo *)0x0);
        fVar7 = pRVar4->m_Height;
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        pRVar4 = (Rect *)0x0;
        bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Implicit
                          ((Object_1 *)sprite,(MethodInfo *)0x0);
        if (bVar3 == 0) {
          VVar11 = RTG::RightAngTriangle2D::RightAngTriangle2D_get_ModelRightAngleCorner
                             ((MethodInfo *)0x0);
          pTStack_6 = (Texture2D *)VVar11.y;
          pTVar10 = pTStack_6;
          fVar8 = (float)auStack_5._8_4_;
          unique0x10000609 = VVar11;
        }
        else {
          if (sprite == (Sprite *)0x0) goto code_?;
          pRVar4 = (Rect *)auStack_5;
          pRVar12 = UnityEngine.CoreModule.dll::UnityEngine::Sprite::Sprite_get_rect
                             (pRVar4,sprite,(MethodInfo *)0x0);
          pTVar10 = (Texture2D *)pRVar12->m_Height;
          fVar8 = pRVar12->m_Width;
        }
        if (((float)pRVar4 == fVar8) && (fVar7 == (float)pTVar10)) {
          bVar3 = 1;
        }
        else {
          bVar3 = 0;
        }
        (this_00->fields)._._.m_SkipLayoutUpdate = bVar3;
        pSVar2 = (this_00->fields).m_Sprite;
        if (pSVar2 != (Sprite *)0x0) {
          pTVar10 = UnityEngine.CoreModule.dll::UnityEngine::Sprite::Sprite_get_texture
                             (pSVar2,(MethodInfo *)0x0);
          pTStack_6 = pTVar10;
          if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Implicit
                            ((Object_1 *)sprite,(MethodInfo *)0x0);
          if (bVar3 == 0) {
            pTStack_9 = (Texture2D *)0x0;
          }
          else {
            if (sprite == (Sprite *)0x0) goto code_?;
            pTStack_9 = UnityEngine.CoreModule.dll::UnityEngine::Sprite::Sprite_get_texture
                                   (sprite,(MethodInfo *)0x0);
          }
          if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          pTVar10 = pTStack_6;
          y = pTStack_9;
          goto code_?;
        }
      }
    }
  }
code_?:
  func_?();
  func_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Void Show(Transform, Single, Single) */

void Assembly-CSharp.dll::DamageIndicator+IndicatorArrow::DamageIndicator_IndicatorArrow_Show
               (DamageIndicator_IndicatorArrow *this,Transform *origin,float time,
               float indicationRadius,MethodInfo *method)

{
  (this->fields).damageOrigin = origin;
  func_?(&(this->fields).damageOrigin,origin);
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
      func_?();
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
    func_?(&TypeInfo__DamageIndicator__IndicatorArrow);
    cRam_? = '\x01';
  }
  func_?(&stack0xffffff78,0,0x40);
  this_00 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
  if ((this_00 != (MainCameraManager *)0x0) &&
     (pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                         ((Component *)this_00,(MethodInfo *)0x0), pTVar1 != (Transform *)0x0)) {
    pMVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_worldToLocalMatrix
                       ((Matrix4x4 *)&fStack_3,pTVar1,(MethodInfo *)0x0);
    fVar4 = pMVar2->m20;
    fStack_3 = pMVar2->m13;
    fStack_5 = pMVar2->m23;
    fStack_6 = pMVar2->m33;
    pTVar1 = (this->fields).damageOrigin;
    if (pTVar1 != (Transform *)0x0) {
      pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                         ((Vector3 *)&stack0xffffff70,pTVar1,(MethodInfo *)0x0);
      pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_MultiplyPoint
                         ((Vector3 *)&stack0xffffff7c,(Matrix4x4 *)&stack0xffffff9c,*pVVar7,
                          (MethodInfo *)0x0);
      uVar8 = pVVar7->x;
      uVar9 = pVVar7->y;
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      dVar10 = (double)((float)uVar9 * (float)uVar9 + (float)uVar8 * (float)uVar8);
      if (dVar10 < 0.0) {
        func_?();
      }
      else {
        dVar10 = SQRT(dVar10);
      }
      if (((float)dVar10 <= _UNK_?) && (cRam_? == '\0')) {
        func_?();
        cRam_? = '\x01';
      }
      pDVar11 = (this->fields).arrow;
      if ((pDVar11 != (DamageArrow *)0x0) &&
         (pIVar12 = (pDVar11->fields).image, pIVar12 != (Image *)0x0)) {
        pTVar1 = (Transform *)
                 UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                           ((Graphic *)pIVar12,(MethodInfo *)0x0);
        upwards.y = (float)in_stack_13;
        upwards.x = fVar4;
        upwards.z = 0.0;
        pQVar14 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_LookRotation
                           ((Quaternion *)&stack0xffffff9c,(Vector3)(ZEXT412(0x3f800000) << 0x40),
                            upwards,(MethodInfo *)0x0);
        if (pTVar1 != (Transform *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localRotation
                    (pTVar1,*pQVar14,(MethodInfo *)0x0);
          pDVar11 = (this->fields).arrow;
          if ((pDVar11 != (DamageArrow *)0x0) &&
             (pIVar12 = (pDVar11->fields).image, pIVar12 != (Image *)0x0)) {
            this_01 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                                ((Graphic *)pIVar12,(MethodInfo *)0x0);
            fStack_15 = fStack_15 *
                        TypeInfo__DamageIndicator__IndicatorArrow->static_fields->indicationRadius;
            fStack_16 = fStack_6 *
                        TypeInfo__DamageIndicator__IndicatorArrow->static_fields->indicationRadius;
            fStack_6 = fStack_15;
            if (this_01 != (RectTransform *)0x0) {
              value.y = fStack_16;
              value.x = fStack_15;
              UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
              RectTransform_set_anchoredPosition(this_01,value,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar17 = (code *)swi(3);
  (*pcVar17)();
  return;
}


/* DamageIndicator+IndicatorArrow(Int32, DamageArrow, Single) */

void Assembly-CSharp.dll::DamageIndicator+IndicatorArrow::DamageIndicator_IndicatorArrow__ctor
               (DamageIndicator_IndicatorArrow *this,int32_t numberOfArrows,DamageArrow *arrowBase,
               float indicationRadius,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__DamageIndicator__IndicatorArrow);
    cRam_? = '\x01';
  }
  DamageIndicator_IndicatorArrow__ctor_1
            (this,numberOfArrows,arrowBase,(DamageIndicator_IndicatorArrow *)0x0,(MethodInfo *)0x0);
  TypeInfo__DamageIndicator__IndicatorArrow->static_fields->indicationRadius = indicationRadius;
  TypeInfo__DamageIndicator__IndicatorArrow->static_fields->_nextArrow = this;
  func_?(TypeInfo__DamageIndicator__IndicatorArrow->static_fields,this);
  return;
}


/* DamageIndicator+IndicatorArrow(Int32, DamageArrow, DamageIndicator+IndicatorArrow) */

void Assembly-CSharp.dll::DamageIndicator+IndicatorArrow::DamageIndicator_IndicatorArrow__ctor_1
               (DamageIndicator_IndicatorArrow *this,int32_t numberOfArrows,DamageArrow *arrowBase,
               DamageIndicator_IndicatorArrow *firstArrow,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__DamageIndicator__IndicatorArrow);
    func_?(&
                    DamageArrow_MethodInfo__UnityEngine__Object__Instantiate<DamageArrow>_DamageArrow__UnityEngine__Transform__bool_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  (this->fields).idle = 1;
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_EDI);
  if (arrowBase != (DamageArrow *)0x0) {
    pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)arrowBase,(MethodInfo *)0x0);
    if (pTVar1 != (Transform *)0x0) {
      pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetParent
                         (pTVar1,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pDVar2 = (DamageArrow *)
               UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_6
                         ((Object *)arrowBase,pTVar1,0,
                          DamageArrow_MethodInfo__UnityEngine__Object__Instantiate<DamageArrow>_DamageArrow__UnityEngine__Transform__bool_
                         );
      (this->fields).arrow = pDVar2;
      func_?();
      firstArrow_00 = this;
      if (firstArrow != (DamageIndicator_IndicatorArrow *)0x0) {
        firstArrow_00 = firstArrow;
      }
      if (numberOfArrows != 1) {
        this_00 = (DamageIndicator_IndicatorArrow *)func_?();
        DamageIndicator_IndicatorArrow__ctor_1
                  (this_00,(int32_t)arrowBase,arrowBase,firstArrow_00,(MethodInfo *)0x0);
        (this->fields).nextArrow = this_00;
        func_?();
        return;
      }
      (this->fields).nextArrow = firstArrow_00;
      func_?();
      return;
    }
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
    func_?();
    cRam_? = '\x01';
  }
  pDVar1 = TypeInfo__DamageIndicator__IndicatorArrow->static_fields->_nextArrow;
  if (pDVar1 != (DamageIndicator_IndicatorArrow *)0x0) {
    TypeInfo__DamageIndicator__IndicatorArrow->static_fields->_nextArrow =
         (pDVar1->fields).nextArrow;
    pDStack_2 = TypeInfo__DamageIndicator__IndicatorArrow->static_fields;
    func_?();
    return TypeInfo__DamageIndicator__IndicatorArrow->static_fields->_nextArrow;
  }
  uVar3 = func_?(&puStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  pDVar1 = (DamageIndicator_IndicatorArrow *)(*pcVar5)();
  return pDVar1;
}

