
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
        ppVVar4 = (Vector2__Class **)pRVar3->m_Width;
        RStack_5.m_XMin = pRVar3->m_Height;
        RStack_5.m_YMin = RStack_5.m_XMin;
        RStack_5.m_Width = RStack_5.m_XMin;
        RStack_5.m_Height = RStack_5.m_XMin;
        if (cRam_? == '\0') {
          ppVVar4 = &TypeInfo__UnityEngine__Vector2;
          func_?();
          cRam_? = '\x01';
        }
        fVar6 = (float)ppVVar4 - (TypeInfo__UnityEngine__Vector2->static_fields->zeroVector).x;
        fVar7 = RStack_5.m_XMin - (TypeInfo__UnityEngine__Vector2->static_fields->zeroVector).y;
        (this_00->fields)._._.m_SkipLayoutUpdate = fVar7 * fVar7 + fVar6 * fVar6 < _UNK_?;
        pOStack_8 = (Object_1__Class *)
                     UnityEngine.CoreModule.dll::UnityEngine::Sprite::Sprite_get_texture
                               (value,(MethodInfo *)0x0);
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        pOVar9 = pOStack_8;
        y = (Object_1__Class *)0x0;
code_?:
        bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                          ((Object_1 *)pOVar9,(Object_1 *)y,(MethodInfo *)0x0);
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
      pOStack_8 = (Object_1__Class *)(this_00->fields).m_Sprite;
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                        ((Object_1 *)pOStack_8,(Object_1 *)value,(MethodInfo *)0x0);
      if (bVar2 == 0) {
        return;
      }
      pSVar1 = (this_00->fields).m_Sprite;
      if (pSVar1 != (Sprite *)0x0) {
        pRVar3 = UnityEngine.CoreModule.dll::UnityEngine::Sprite::Sprite_get_rect
                           ((Rect *)&stack0xffffffb0,pSVar1,(MethodInfo *)0x0);
        fVar6 = pRVar3->m_Height;
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        pRVar3 = (Rect *)0x0;
        bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Implicit
                          ((Object_1 *)value,(MethodInfo *)0x0);
        if (bVar2 == 0) {
          uVar10 = func_?();
          RStack_5._8_8_ = uVar10;
        }
        else {
          if (value == (Sprite *)0x0) goto code_?;
          pRVar3 = &RStack_5;
          pRVar11 = UnityEngine.CoreModule.dll::UnityEngine::Sprite::Sprite_get_rect
                             (pRVar3,value,(MethodInfo *)0x0);
          uVar10._0_4_ = pRVar11->m_Width;
          uVar10._4_4_ = pRVar11->m_Height;
        }
        if (((float)pRVar3 == (float)uVar10) && (fVar6 == SUB84(uVar10,4))) {
          bVar2 = 1;
        }
        else {
          bVar2 = 0;
        }
        (this_00->fields)._._.m_SkipLayoutUpdate = bVar2;
        pSVar1 = (this_00->fields).m_Sprite;
        if (pSVar1 != (Sprite *)0x0) {
          pOVar9 = (Object_1__Class *)
                   UnityEngine.CoreModule.dll::UnityEngine::Sprite::Sprite_get_texture
                             (pSVar1,(MethodInfo *)0x0);
          RStack_5.m_Height = (float)pOVar9;
          if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
            RStack_5.m_YMin = (float)TypeInfo__UnityEngine__Object;
            RStack_5.m_XMin = (float)&UNK_?;
            func_?();
          }
          bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Implicit
                            ((Object_1 *)value,(MethodInfo *)0x0);
          if (bVar2 == 0) {
            pOStack_8 = (Object_1__Class *)0x0;
          }
          else {
            if (value == (Sprite *)0x0) goto code_?;
            pOStack_8 = (Object_1__Class *)
                         UnityEngine.CoreModule.dll::UnityEngine::Sprite::Sprite_get_texture
                                   (value,(MethodInfo *)0x0);
          }
          pOVar9 = (Object_1__Class *)RStack_5.m_Height;
          y = pOStack_8;
          if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
            pOVar9 = (Object_1__Class *)RStack_5.m_Height;
            y = pOStack_8;
          }
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

