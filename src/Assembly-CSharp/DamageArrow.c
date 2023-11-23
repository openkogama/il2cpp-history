
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
    if ((this_00->fields)._._.m_RectTransform == (RectTransform *)0x0) {
      pRVar1 = (RectTransform *)
               UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                         ((Component *)this_00,
                          UnityEngine__RectTransform_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::RectTransform>__
                         );
      (this_00->fields)._._.m_RectTransform = pRVar1;
      func_?();
    }
    return (this_00->fields)._._.m_RectTransform;
  }
  uVar2 = func_?(&stack0xfffffff0);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  pRVar1 = (RectTransform *)(*pcVar3)();
  return pRVar1;
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
    pSVar1 = (this_00->fields).m_Sprite;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                      ((Object_1 *)pSVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar2 == 0) {
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                        ((Object_1 *)value,(Object_1 *)0x0,(MethodInfo *)0x0);
      if (bVar2 == 0) {
        return;
      }
      if (value != (Sprite *)0x0) {
        pRVar3 = UnityEngine.CoreModule.dll::UnityEngine::Sprite::Sprite_get_rect
                           ((Rect *)&stack0xffffffb0,value,(MethodInfo *)0x0);
        RStack_4.m_XMin = pRVar3->m_XMin;
        RStack_4.m_YMin = pRVar3->m_YMin;
        RStack_4.m_Width = pRVar3->m_Width;
        RStack_4.m_Height = pRVar3->m_Height;
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        fVar5 = RStack_4.m_Width - (TypeInfo__UnityEngine__Vector2->static_fields->zeroVector).x;
        fVar6 = RStack_4.m_Height - (TypeInfo__UnityEngine__Vector2->static_fields->zeroVector).y;
        (this_00->fields)._._.m_SkipLayoutUpdate = fVar6 * fVar6 + fVar5 * fVar5 < _UNK_?;
        pTStack_7 = UnityEngine.CoreModule.dll::UnityEngine::Sprite::Sprite_get_texture
                               (value,(MethodInfo *)0x0);
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        pTVar8 = pTStack_7;
        y = (Texture2D *)0x0;
code_?:
        bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                          ((Object_1 *)pTVar8,(Object_1 *)y,(MethodInfo *)0x0);
        (this_00->fields)._._.m_SkipMaterialUpdate = bVar2;
        (this_00->fields).m_Sprite = value;
        func_?();
        UnityEngine.UI.dll::UnityEngine::UI::Image::
        Image__set_sprite_g__ResetAlphaHitThresholdIfNeeded_11_0(this_00,(MethodInfo *)0x0);
        (*(code *)(this_00->klass->vtable).SetAllDirty.method)();
        UnityEngine.UI.dll::UnityEngine::UI::Image::Image_TrackSprite(this_00,(MethodInfo *)0x0);
        return;
      }
    }
    else {
      pTStack_7 = (Texture2D *)(this_00->fields).m_Sprite;
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                        ((Object_1 *)pTStack_7,(Object_1 *)value,(MethodInfo *)0x0);
      if (bVar2 == 0) {
        return;
      }
      pSVar1 = (this_00->fields).m_Sprite;
      if (pSVar1 != (Sprite *)0x0) {
        pRVar3 = UnityEngine.CoreModule.dll::UnityEngine::Sprite::Sprite_get_rect
                           ((Rect *)&stack0xffffffb0,pSVar1,(MethodInfo *)0x0);
        fVar5 = pRVar3->m_Height;
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        pRVar3 = (Rect *)0x0;
        bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Implicit
                          ((Object_1 *)value,(MethodInfo *)0x0);
        if (bVar2 == 0) {
          uVar9 = func_?();
          RStack_4._8_8_ = uVar9;
        }
        else {
          if (value == (Sprite *)0x0) goto code_?;
          pRVar3 = &RStack_4;
          pRVar10 = UnityEngine.CoreModule.dll::UnityEngine::Sprite::Sprite_get_rect
                             (pRVar3,value,(MethodInfo *)0x0);
          uVar9._0_4_ = pRVar10->m_Width;
          uVar9._4_4_ = pRVar10->m_Height;
        }
        if (((float)pRVar3 == (float)uVar9) && (fVar5 == SUB84(uVar9,4))) {
          bVar2 = 1;
        }
        else {
          bVar2 = 0;
        }
        (this_00->fields)._._.m_SkipLayoutUpdate = bVar2;
        pSVar1 = (this_00->fields).m_Sprite;
        if (pSVar1 != (Sprite *)0x0) {
          pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::Sprite::Sprite_get_texture
                             (pSVar1,(MethodInfo *)0x0);
          RStack_4.m_Height = (float)pTVar8;
          if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
            RStack_4.m_YMin = (float)TypeInfo__UnityEngine__Object;
            RStack_4.m_XMin = (float)&UNK_?;
            func_?();
          }
          bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Implicit
                            ((Object_1 *)value,(MethodInfo *)0x0);
          if (bVar2 == 0) {
            pTStack_7 = (Texture2D *)0x0;
          }
          else {
            if (value == (Sprite *)0x0) goto code_?;
            pTStack_7 = UnityEngine.CoreModule.dll::UnityEngine::Sprite::Sprite_get_texture
                                   (value,(MethodInfo *)0x0);
          }
          pTVar8 = (Texture2D *)RStack_4.m_Height;
          y = pTStack_7;
          if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
            pTVar8 = (Texture2D *)RStack_4.m_Height;
            y = pTStack_7;
          }
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

