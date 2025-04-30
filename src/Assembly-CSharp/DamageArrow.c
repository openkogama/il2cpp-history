
/* Void OnEnable() */

void Assembly-CSharp.dll::DamageArrow::DamageArrow_OnEnable(DamageArrow *this,MethodInfo *method)

{
  this_00 = (this->fields).image;
  if (this_00 != (Image *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
              ((Behaviour *)this_00,1,(MethodInfo *)0x0);
    return;
  }
  uVar1 = func_?(&stack0xfffffff0);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* RectTransform get_RectTransform() */

RectTransform *
Assembly-CSharp.dll::DamageArrow::DamageArrow_get_RectTransform
          (DamageArrow *this,MethodInfo *method)

{
  this_00 = (this->fields).image;
  if (this_00 != (Image *)0x0) {
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    ppRVar1 = &(this_00->fields)._._.m_RectTransform;
    if ((this_00->fields)._._.m_RectTransform == (RectTransform *)0x0) {
      pRVar2 = (RectTransform *)
               UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                         ((Component *)this_00,
                          UnityEngine__RectTransform_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::RectTransform>__
                         );
      *ppRVar1 = pRVar2;
      func_?();
    }
    return *ppRVar1;
  }
  uVar3 = func_?(&stack0xfffffff0);
  func_?(uVar3);
  pcVar4 = (code *)swi(3);
  pRVar2 = (RectTransform *)(*pcVar4)();
  return pRVar2;
}


/* Void set_Sprite(Sprite) */

void Assembly-CSharp.dll::DamageArrow::DamageArrow_set_Sprite
               (DamageArrow *this,Sprite *value,MethodInfo *method)

{
  this_00 = (this->fields).image;
  if (this_00 != (Image *)0x0) {
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Object);
      cRam_? = '\x01';
    }
    pTStack_1 = (Texture2D *)(this_00->fields).m_Sprite;
    ppSVar2 = &(this_00->fields).m_Sprite;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                      ((Object_1 *)pTStack_1,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar3 == 0) {
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                        ((Object_1 *)value,(Object_1 *)0x0,(MethodInfo *)0x0);
      if (bVar3 == 0) {
        return;
      }
      if (value != (Sprite *)0x0) {
        pRVar4 = UnityEngine.CoreModule.dll::UnityEngine::Sprite::Sprite_get_rect
                           ((Rect *)&stack0xffffffb0,value,(MethodInfo *)0x0);
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
        pTStack_1 = UnityEngine.CoreModule.dll::UnityEngine::Sprite::Sprite_get_texture
                               (value,(MethodInfo *)0x0);
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                          ((Object_1 *)pTStack_1,(Object_1 *)0x0,(MethodInfo *)0x0);
        (this_00->fields)._._.m_SkipMaterialUpdate = bVar3;
        *ppSVar2 = value;
code_?:
        func_?();
        UnityEngine.UI.dll::UnityEngine::UI::Image::
        Image__set_sprite_g__ResetAlphaHitThresholdIfNeeded_11_0(this_00,(MethodInfo *)0x0);
        (*(code *)(this_00->klass->vtable).SetAllDirty.method)();
        UnityEngine.UI.dll::UnityEngine::UI::Image::Image_TrackSprite(this_00,(MethodInfo *)0x0);
        return;
      }
    }
    else {
      pTStack_1 = (Texture2D *)*ppSVar2;
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                        ((Object_1 *)pTStack_1,(Object_1 *)value,(MethodInfo *)0x0);
      if (bVar3 == 0) {
        return;
      }
      pSVar9 = (this_00->fields).m_Sprite;
      if (pSVar9 != (Sprite *)0x0) {
        pRVar4 = UnityEngine.CoreModule.dll::UnityEngine::Sprite::Sprite_get_rect
                           ((Rect *)&stack0xffffffb0,pSVar9,(MethodInfo *)0x0);
        fVar7 = pRVar4->m_Height;
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        pRVar4 = (Rect *)0x0;
        bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Implicit
                          ((Object_1 *)value,(MethodInfo *)0x0);
        if (bVar3 == 0) {
          VVar10 = RTG::RightAngTriangle2D::RightAngTriangle2D_get_ModelRightAngleCorner
                             ((MethodInfo *)0x0);
          pTStack_6 = (Texture2D *)VVar10.y;
          pTVar11 = pTStack_6;
          fVar8 = (float)auStack_5._8_4_;
          unique0x1000062c = VVar10;
        }
        else {
          if (value == (Sprite *)0x0) goto code_?;
          pRVar4 = (Rect *)auStack_5;
          pRVar12 = UnityEngine.CoreModule.dll::UnityEngine::Sprite::Sprite_get_rect
                             (pRVar4,value,(MethodInfo *)0x0);
          pTVar11 = (Texture2D *)pRVar12->m_Height;
          fVar8 = pRVar12->m_Width;
        }
        if (((float)pRVar4 == fVar8) && (fVar7 == (float)pTVar11)) {
          bVar3 = 1;
        }
        else {
          bVar3 = 0;
        }
        (this_00->fields)._._.m_SkipLayoutUpdate = bVar3;
        pSVar9 = (this_00->fields).m_Sprite;
        if (pSVar9 != (Sprite *)0x0) {
          pTVar11 = UnityEngine.CoreModule.dll::UnityEngine::Sprite::Sprite_get_texture
                             (pSVar9,(MethodInfo *)0x0);
          pTStack_6 = pTVar11;
          if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Implicit
                            ((Object_1 *)value,(MethodInfo *)0x0);
          if (bVar3 == 0) {
            pTStack_1 = (Texture2D *)0x0;
          }
          else {
            if (value == (Sprite *)0x0) goto code_?;
            pTStack_1 = UnityEngine.CoreModule.dll::UnityEngine::Sprite::Sprite_get_texture
                                   (value,(MethodInfo *)0x0);
          }
          if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                            ((Object_1 *)pTStack_6,(Object_1 *)pTStack_1,(MethodInfo *)0x0);
          (this_00->fields)._._.m_SkipMaterialUpdate = bVar3;
          (this_00->fields).m_Sprite = value;
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

