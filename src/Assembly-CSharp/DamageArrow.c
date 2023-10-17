
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
  fVar1 = SUB84(in_stack_2,4);
  this_00 = (this->fields).image;
  if (this_00 != (Image *)0x0) {
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Object);
      cRam_? = '\x01';
    }
    pSVar3 = (this_00->fields).m_Sprite;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    bVar4 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                      ((Object_1 *)pSVar3,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar4 == 0) {
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      bVar4 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                        ((Object_1 *)value,(Object_1 *)0x0,(MethodInfo *)0x0);
      if (bVar4 == 0) {
        return;
      }
      if (value != (Sprite *)0x0) {
        pRVar5 = UnityEngine.CoreModule.dll::UnityEngine::Sprite::Sprite_get_rect
                           ((Rect *)&stack0xffffffdc,value,(MethodInfo *)0x0);
        VVar6 = UnityEngine.CoreModule.dll::UnityEngine::Rect::Rect_get_size
                          ((Rect *)pRVar5->m_YMin,(MethodInfo *)pRVar5->m_Width);
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        fVar1 = VVar6.x - (TypeInfo__UnityEngine__Vector2->static_fields->zeroVector).x;
        fVar7 = VVar6.y - (TypeInfo__UnityEngine__Vector2->static_fields->zeroVector).y;
        (this_00->fields)._._.m_SkipLayoutUpdate = fVar7 * fVar7 + fVar1 * fVar1 < _UNK_?;
        x = UnityEngine.CoreModule.dll::UnityEngine::Sprite::Sprite_get_texture
                      (value,(MethodInfo *)0x0);
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        y = (Texture2D *)0x0;
code_?:
        bVar4 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                          ((Object_1 *)x,(Object_1 *)y,(MethodInfo *)0x0);
        (this_00->fields)._._.m_SkipMaterialUpdate = bVar4;
        (this_00->fields).m_Sprite = value;
        func_?();
        (*(this_00->klass->vtable).SetAllDirty.methodPtr)();
        UnityEngine.UI.dll::UnityEngine::UI::Image::Image_TrackSprite(this_00,(MethodInfo *)0x0);
        return;
      }
    }
    else {
      pSVar3 = (this_00->fields).m_Sprite;
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      bVar4 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                        ((Object_1 *)pSVar3,(Object_1 *)value,(MethodInfo *)0x0);
      if (bVar4 == 0) {
        return;
      }
      pSVar3 = (this_00->fields).m_Sprite;
      if (pSVar3 != (Sprite *)0x0) {
        pRVar5 = UnityEngine.CoreModule.dll::UnityEngine::Sprite::Sprite_get_rect
                           ((Rect *)&stack0xffffffdc,pSVar3,(MethodInfo *)0x0);
        UnityEngine.CoreModule.dll::UnityEngine::Rect::Rect_get_size
                  ((Rect *)pRVar5->m_YMin,(MethodInfo *)pRVar5->m_Width);
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        uVar8 = ZEXT48(value);
        bVar4 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Implicit
                          ((Object_1 *)value,(MethodInfo *)0x0);
        if (bVar4 == 0) {
          fVar7 = (float)func_?();
        }
        else {
          if (value == (Sprite *)0x0) goto code_?;
          puVar9 = &UNK_?;
          UnityEngine.CoreModule.dll::UnityEngine::Sprite::Sprite_get_rect
                    ((Rect *)&stack0xffffffec,value,(MethodInfo *)0x0);
          uVar8 = CONCAT44(&UNK_?,puVar9);
          VVar6 = UnityEngine.CoreModule.dll::UnityEngine::Rect::Rect_get_size
                            ((Rect *)&stack0xffffffcc,(MethodInfo *)0x0);
          fVar7 = VVar6.x;
        }
        if (((float)uVar8 == fVar7) && ((float)(uVar8 >> 0x20) == fVar1)) {
          bVar4 = 1;
        }
        else {
          bVar4 = 0;
        }
        (this_00->fields)._._.m_SkipLayoutUpdate = bVar4;
        pSVar3 = (this_00->fields).m_Sprite;
        if (pSVar3 != (Sprite *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Sprite::Sprite_get_texture
                    (pSVar3,(MethodInfo *)0x0);
          if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          bVar4 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Implicit
                            ((Object_1 *)value,(MethodInfo *)0x0);
          if (bVar4 == 0) {
            y = (Texture2D *)0x0;
          }
          else {
            if (value == (Sprite *)0x0) goto code_?;
            y = UnityEngine.CoreModule.dll::UnityEngine::Sprite::Sprite_get_texture
                          (value,(MethodInfo *)0x0);
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
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}

