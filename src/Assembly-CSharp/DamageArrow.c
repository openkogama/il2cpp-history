
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
        RStack_5.m_XMin = pRVar4->m_XMin;
        RStack_5.m_YMin = pRVar4->m_YMin;
        RStack_5.m_Width = pRVar4->m_Width;
        RStack_5.m_Height = pRVar4->m_Height;
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        fVar6 = RStack_5.m_Width - (TypeInfo__UnityEngine__Vector2->static_fields->zeroVector).x;
        fVar7 = RStack_5.m_Height - (TypeInfo__UnityEngine__Vector2->static_fields->zeroVector).y;
        (this_00->fields)._._.m_SkipLayoutUpdate = fVar7 * fVar7 + fVar6 * fVar6 < _UNK_?;
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
      pSVar8 = (this_00->fields).m_Sprite;
      if (pSVar8 != (Sprite *)0x0) {
        pRVar4 = UnityEngine.CoreModule.dll::UnityEngine::Sprite::Sprite_get_rect
                           ((Rect *)&stack0xffffffb0,pSVar8,(MethodInfo *)0x0);
        fVar6 = pRVar4->m_Height;
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        pRVar4 = (Rect *)0x0;
        bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Implicit
                          ((Object_1 *)value,(MethodInfo *)0x0);
        if (bVar3 == 0) {
          uVar9 = func_?();
          RStack_5._8_8_ = uVar9;
        }
        else {
          if (value == (Sprite *)0x0) goto code_?;
          pRVar4 = &RStack_5;
          pRVar10 = UnityEngine.CoreModule.dll::UnityEngine::Sprite::Sprite_get_rect
                             (pRVar4,value,(MethodInfo *)0x0);
          uVar9._0_4_ = pRVar10->m_Width;
          uVar9._4_4_ = pRVar10->m_Height;
        }
        if (((float)pRVar4 == (float)uVar9) && (fVar6 == SUB84(uVar9,4))) {
          bVar3 = 1;
        }
        else {
          bVar3 = 0;
        }
        (this_00->fields)._._.m_SkipLayoutUpdate = bVar3;
        pSVar8 = (this_00->fields).m_Sprite;
        if (pSVar8 != (Sprite *)0x0) {
          pTVar11 = UnityEngine.CoreModule.dll::UnityEngine::Sprite::Sprite_get_texture
                             (pSVar8,(MethodInfo *)0x0);
          RStack_5.m_Height = (float)pTVar11;
          if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
            RStack_5.m_YMin = (float)TypeInfo__UnityEngine__Object;
            RStack_5.m_XMin = (float)&UNK_?;
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
                            ((Object_1 *)RStack_5.m_Height,(Object_1 *)pTStack_1,(MethodInfo *)0x0
                            );
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
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}

