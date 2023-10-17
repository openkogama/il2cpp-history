
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
  fVar1 = SUB84(in_stack_2,4);
  pDVar3 = (this->fields).arrow;
  if ((pDVar3 != (DamageArrow *)0x0) && (this_00 = (pDVar3->fields).image, this_00 != (Image *)0x0))
  {
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Object);
      cRam_? = '\x01';
    }
    pSVar4 = (this_00->fields).m_Sprite;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    bVar5 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                      ((Object_1 *)pSVar4,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar5 == 0) {
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      bVar5 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                        ((Object_1 *)sprite,(Object_1 *)0x0,(MethodInfo *)0x0);
      if (bVar5 == 0) {
        return;
      }
      if (sprite != (Sprite *)0x0) {
        pRVar6 = UnityEngine.CoreModule.dll::UnityEngine::Sprite::Sprite_get_rect
                           ((Rect *)&stack0xffffffdc,sprite,(MethodInfo *)0x0);
        VVar7 = UnityEngine.CoreModule.dll::UnityEngine::Rect::Rect_get_size
                          ((Rect *)pRVar6->m_YMin,(MethodInfo *)pRVar6->m_Width);
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        fVar1 = VVar7.x - (TypeInfo__UnityEngine__Vector2->static_fields->zeroVector).x;
        fVar8 = VVar7.y - (TypeInfo__UnityEngine__Vector2->static_fields->zeroVector).y;
        (this_00->fields)._._.m_SkipLayoutUpdate = fVar8 * fVar8 + fVar1 * fVar1 < _UNK_?;
        x = UnityEngine.CoreModule.dll::UnityEngine::Sprite::Sprite_get_texture
                      (sprite,(MethodInfo *)0x0);
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        y = (Texture2D *)0x0;
code_?:
        bVar5 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                          ((Object_1 *)x,(Object_1 *)y,(MethodInfo *)0x0);
        (this_00->fields)._._.m_SkipMaterialUpdate = bVar5;
        (this_00->fields).m_Sprite = sprite;
        func_?();
        (*(this_00->klass->vtable).SetAllDirty.methodPtr)();
        UnityEngine.UI.dll::UnityEngine::UI::Image::Image_TrackSprite(this_00,(MethodInfo *)0x0);
        return;
      }
    }
    else {
      pSVar4 = (this_00->fields).m_Sprite;
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      bVar5 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                        ((Object_1 *)pSVar4,(Object_1 *)sprite,(MethodInfo *)0x0);
      if (bVar5 == 0) {
        return;
      }
      pSVar4 = (this_00->fields).m_Sprite;
      if (pSVar4 != (Sprite *)0x0) {
        pRVar6 = UnityEngine.CoreModule.dll::UnityEngine::Sprite::Sprite_get_rect
                           ((Rect *)&stack0xffffffdc,pSVar4,(MethodInfo *)0x0);
        UnityEngine.CoreModule.dll::UnityEngine::Rect::Rect_get_size
                  ((Rect *)pRVar6->m_YMin,(MethodInfo *)pRVar6->m_Width);
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        uVar9 = ZEXT48(sprite);
        bVar5 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Implicit
                          ((Object_1 *)sprite,(MethodInfo *)0x0);
        if (bVar5 == 0) {
          fVar8 = (float)func_?();
        }
        else {
          if (sprite == (Sprite *)0x0) goto code_?;
          puVar10 = &UNK_?;
          UnityEngine.CoreModule.dll::UnityEngine::Sprite::Sprite_get_rect
                    ((Rect *)&stack0xffffffec,sprite,(MethodInfo *)0x0);
          uVar9 = CONCAT44(&UNK_?,puVar10);
          VVar7 = UnityEngine.CoreModule.dll::UnityEngine::Rect::Rect_get_size
                            ((Rect *)&stack0xffffffcc,(MethodInfo *)0x0);
          fVar8 = VVar7.x;
        }
        if (((float)uVar9 == fVar8) && ((float)(uVar9 >> 0x20) == fVar1)) {
          bVar5 = 1;
        }
        else {
          bVar5 = 0;
        }
        (this_00->fields)._._.m_SkipLayoutUpdate = bVar5;
        pSVar4 = (this_00->fields).m_Sprite;
        if (pSVar4 != (Sprite *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Sprite::Sprite_get_texture
                    (pSVar4,(MethodInfo *)0x0);
          if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          bVar5 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Implicit
                            ((Object_1 *)sprite,(MethodInfo *)0x0);
          if (bVar5 == 0) {
            y = (Texture2D *)0x0;
          }
          else {
            if (sprite == (Sprite *)0x0) goto code_?;
            y = UnityEngine.CoreModule.dll::UnityEngine::Sprite::Sprite_get_texture
                          (sprite,(MethodInfo *)0x0);
          }
          if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          x = (Texture2D *)0x0;
          goto code_?;
        }
      }
    }
  }
code_?:
  func_?();
  func_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
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
  func_?(&fStack_1,0,0x40);
  this_00 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
  if (this_00 != (MainCameraManager *)0x0) {
    pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)this_00,(MethodInfo *)0x0);
    if (pTVar2 != (Transform *)0x0) {
      pMVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_worldToLocalMatrix
                         ((Matrix4x4 *)&stack0xffffff54,pTVar2,(MethodInfo *)0x0);
      fStack_1 = pMVar3->m00;
      puStack_4 = (undefined *)pMVar3->m10;
      pTVar2 = (this->fields).damageOrigin;
      if (pTVar2 != (Transform *)0x0) {
        pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                           ((Vector3 *)(auStack_6 + 4),pTVar2,(MethodInfo *)0x0);
        pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_MultiplyPoint
                           ((Vector3 *)(auStack_6 + 4),(Matrix4x4 *)&fStack_1,*pVVar5,
                            (MethodInfo *)0x0);
        uStack_7._0_4_ = pVVar5->x;
        uStack_7._4_4_ = pVVar5->y;
        fStack_8 = pVVar5->z;
        uStack_9 = uStack_7;
        fVar10 = (float10)func_?();
        fVar11 = (float)fVar10;
        uStack_9 = CONCAT44(fVar11,(undefined4)uStack_9);
        if (_UNK_? < fVar11) {
          fStack_12 = (float)uStack_7 / fVar11;
          fVar11 = uStack_7._4_4_ / fVar11;
        }
        else {
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          fStack_12 = (TypeInfo__UnityEngine__Vector2->static_fields->zeroVector).x;
          fVar11 = (TypeInfo__UnityEngine__Vector2->static_fields->zeroVector).y;
        }
        uStack_9 = CONCAT44(fVar11,(undefined4)uStack_9);
        pDVar13 = (this->fields).arrow;
        if ((pDVar13 != (DamageArrow *)0x0) &&
           (pIVar14 = (pDVar13->fields).image, pIVar14 != (Image *)0x0)) {
          pTVar2 = (Transform *)
                   UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                             ((Graphic *)pIVar14,(MethodInfo *)0x0);
          fStack_8 = 0.0;
          fStack_15 = 1.0;
          upwards.y = uStack_9._4_4_;
          upwards.x = fStack_12;
          upwards.z = 0.0;
          pQVar16 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_LookRotation
                             ((Quaternion *)auStack_6,(Vector3)(ZEXT412(0x3f800000) << 0x40),
                              upwards,(MethodInfo *)0x0);
          if (pTVar2 != (Transform *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localRotation
                      (pTVar2,*pQVar16,(MethodInfo *)0x0);
            pDVar13 = (this->fields).arrow;
            if ((pDVar13 != (DamageArrow *)0x0) &&
               (pIVar14 = (pDVar13->fields).image, pIVar14 != (Image *)0x0)) {
              this_01 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                                  ((Graphic *)pIVar14,(MethodInfo *)0x0);
              fVar11 = fStack_12 *
                      TypeInfo__DamageIndicator__IndicatorArrow->static_fields->indicationRadius;
              uStack_9._4_4_ =
                   uStack_9._4_4_ *
                   TypeInfo__DamageIndicator__IndicatorArrow->static_fields->indicationRadius;
              uStack_9 = CONCAT44(uStack_9._4_4_,fVar11);
              if (this_01 != (RectTransform *)0x0) {
                value.y = uStack_9._4_4_;
                value.x = fVar11;
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
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_EDI);
  if (arrowBase != (DamageArrow *)0x0) {
    this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)arrowBase,(MethodInfo *)0x0);
    if (this_00 != (Transform *)0x0) {
      parent = (Object_1__Class *)
               UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetParent
                         (this_00,(MethodInfo *)0x0);
      pOVar1 = TypeInfo__UnityEngine__Object;
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
        parent = pOVar1;
      }
      pDVar2 = (DamageArrow *)
               UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_6
                         ((Object *)arrowBase,(Transform *)parent,0,
                          DamageArrow_MethodInfo__UnityEngine__Object__Instantiate<DamageArrow>_DamageArrow__UnityEngine__Transform__bool_
                         );
      (this->fields).arrow = pDVar2;
      func_?();
      firstArrow_00 = this;
      if (firstArrow != (DamageIndicator_IndicatorArrow *)0x0) {
        firstArrow_00 = firstArrow;
      }
      if (numberOfArrows + -1 == 0) {
        (this->fields).nextArrow = firstArrow_00;
        func_?();
        return;
      }
      this_01 = (DamageIndicator_IndicatorArrow *)func_?();
      if (this_01 != (DamageIndicator_IndicatorArrow *)0x0) {
        DamageIndicator_IndicatorArrow__ctor_1
                  (this_01,numberOfArrows + -1,arrowBase,firstArrow_00,(MethodInfo *)0x0);
        (this->fields).nextArrow = this_01;
        func_?(&this->fields,this_01);
        return;
      }
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

