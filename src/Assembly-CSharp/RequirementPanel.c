
/* Void SetCanAfford(Sprite) */

void Assembly-CSharp.dll::RequirementPanel::RequirementPanel_SetCanAfford
               (RequirementPanel *this,Sprite *canAffordSprite,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pIVar1 = (this->fields).canUseSprite;
  if (pIVar1 != (Image *)0x0) {
    pSVar2 = (pIVar1->fields).m_Sprite;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                      ((Object_1 *)pSVar2,(Object_1 *)canAffordSprite,(MethodInfo *)0x0);
    if (bVar3 == 0) {
      return;
    }
    if ((this->fields).canUseSprite != (Image *)0x0) {
      if (cRam_? == '\0') {
        func_?(&TypeInfo__UnityEngine__Object);
        cRam_? = '\x01';
      }
      pSVar2 = (in_stack_4->fields).m_Sprite;
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
                          ((Object_1 *)in_stack_5,(Object_1 *)0x0,(MethodInfo *)0x0);
        if (bVar3 == 0) {
          return;
        }
        if (in_stack_5 != (Sprite *)0x0) {
          pRVar6 = UnityEngine.CoreModule.dll::UnityEngine::Sprite::Sprite_get_rect
                             ((Rect *)&stack0xffffffc0,in_stack_5,(MethodInfo *)0x0);
          ppVVar7 = (Vector2__Class **)pRVar6->m_Width;
          fVar8 = pRVar6->m_Height;
          if (cRam_? == '\0') {
            ppVVar7 = &TypeInfo__UnityEngine__Vector2;
            func_?();
            cRam_? = '\x01';
          }
          fVar9 = (float)ppVVar7 - (TypeInfo__UnityEngine__Vector2->static_fields->zeroVector).x;
          fVar8 = fVar8 - (TypeInfo__UnityEngine__Vector2->static_fields->zeroVector).y;
          (in_stack_4->fields)._._.m_SkipLayoutUpdate =
               fVar8 * fVar8 + fVar9 * fVar9 < _UNK_?;
          x = UnityEngine.CoreModule.dll::UnityEngine::Sprite::Sprite_get_texture
                        (in_stack_5,(MethodInfo *)0x0);
          if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          y = (Texture2D *)0x0;
code_?:
          bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                            ((Object_1 *)x,(Object_1 *)y,(MethodInfo *)0x0);
          (in_stack_4->fields)._._.m_SkipMaterialUpdate = bVar3;
          (in_stack_4->fields).m_Sprite = in_stack_5;
          func_?();
          UnityEngine.UI.dll::UnityEngine::UI::Image::
          Image__set_sprite_g__ResetAlphaHitThresholdIfNeeded_11_0
                    (in_stack_4,(MethodInfo *)0x0);
          (*(code *)(in_stack_4->klass->vtable).SetAllDirty.method)();
          UnityEngine.UI.dll::UnityEngine::UI::Image::Image_TrackSprite
                    (in_stack_4,(MethodInfo *)0x0);
          return;
        }
      }
      else {
        pSVar2 = (in_stack_4->fields).m_Sprite;
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__UnityEngine__Object);
        }
        bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                          ((Object_1 *)pSVar2,(Object_1 *)in_stack_5,(MethodInfo *)0x0);
        if (bVar3 == 0) {
          return;
        }
        pSVar2 = (in_stack_4->fields).m_Sprite;
        if (pSVar2 != (Sprite *)0x0) {
          pRVar6 = UnityEngine.CoreModule.dll::UnityEngine::Sprite::Sprite_get_rect
                             ((Rect *)&stack0xffffffc0,pSVar2,(MethodInfo *)0x0);
          fVar8 = pRVar6->m_Height;
          if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          pRVar6 = (Rect *)0x0;
          bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Implicit
                            ((Object_1 *)in_stack_5,(MethodInfo *)0x0);
          if (bVar3 == 0) {
            uVar10 = func_?();
          }
          else {
            if (in_stack_5 == (Sprite *)0x0) goto code_?;
            pRVar6 = (Rect *)&stack0xffffffe8;
            pRVar11 = UnityEngine.CoreModule.dll::UnityEngine::Sprite::Sprite_get_rect
                               (pRVar6,in_stack_5,(MethodInfo *)0x0);
            uVar10._0_4_ = pRVar11->m_Width;
            uVar10._4_4_ = pRVar11->m_Height;
          }
          if (((float)pRVar6 == (float)uVar10) && (fVar8 == (float)((ulonglong)uVar10 >> 0x20))) {
            bVar3 = 1;
          }
          else {
            bVar3 = 0;
          }
          (in_stack_4->fields)._._.m_SkipLayoutUpdate = bVar3;
          pSVar2 = (in_stack_4->fields).m_Sprite;
          if (pSVar2 != (Sprite *)0x0) {
            x = UnityEngine.CoreModule.dll::UnityEngine::Sprite::Sprite_get_texture
                          (pSVar2,(MethodInfo *)0x0);
            if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Implicit
                              ((Object_1 *)in_stack_5,(MethodInfo *)0x0);
            if (bVar3 == 0) {
              y = (Texture2D *)0x0;
            }
            else {
              if (in_stack_5 == (Sprite *)0x0) goto code_?;
              y = UnityEngine.CoreModule.dll::UnityEngine::Sprite::Sprite_get_texture
                            (in_stack_5,(MethodInfo *)0x0);
            }
            if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            goto code_?;
          }
        }
      }
code_?:
      func_?();
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
  }
  func_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void SetRequirementCostText(Int32) */

void Assembly-CSharp.dll::RequirementPanel::RequirementPanel_SetRequirementCostText
               (RequirementPanel *this,int32_t cost,MethodInfo *method)

{
  pTVar1 = (this->fields).requirementCost;
  pSVar2 = mscorlib.dll::System::Int32::Int32_ToString((Int32 *)&cost,(MethodInfo *)0x0);
  if (pTVar1 != (Text *)0x0) {
    (*(code *)(pTVar1->klass->vtable).set_text.method)
              (pTVar1,pSVar2,(pTVar1->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
    return;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

