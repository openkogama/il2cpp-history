
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
    fVar3 = 0.0;
    bVar4 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                      ((Object_1 *)pSVar2,(Object_1 *)canAffordSprite,(MethodInfo *)0x0);
    if (bVar4 == 0) {
      return;
    }
    if ((this->fields).canUseSprite != (Image *)0x0) {
      if (cRam_? == '\0') {
        func_?(&TypeInfo__UnityEngine__Object);
        cRam_? = '\x01';
      }
      pSVar2 = (in_stack_5->fields).m_Sprite;
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      bVar4 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                        ((Object_1 *)pSVar2,(Object_1 *)0x0,(MethodInfo *)0x0);
      if (bVar4 == 0) {
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__UnityEngine__Object);
        }
        bVar4 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                          ((Object_1 *)in_stack_6,(Object_1 *)0x0,(MethodInfo *)0x0);
        if (bVar4 == 0) {
          return;
        }
        if (in_stack_6 != (Sprite *)0x0) {
          pRVar7 = UnityEngine.CoreModule.dll::UnityEngine::Sprite::Sprite_get_rect
                             ((Rect *)&stack0xffffffc0,in_stack_6,(MethodInfo *)0x0);
          uVar8._0_4_ = pRVar7->m_Width;
          uVar8._4_4_ = pRVar7->m_Height;
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          fVar3 = (float)uVar8 - (TypeInfo__UnityEngine__Vector2->static_fields->zeroVector).x;
          fVar9 = SUB84(uVar8,4) - (TypeInfo__UnityEngine__Vector2->static_fields->zeroVector).y;
          (in_stack_5->fields)._._.m_SkipLayoutUpdate =
               fVar9 * fVar9 + fVar3 * fVar3 < _UNK_?;
          x = UnityEngine.CoreModule.dll::UnityEngine::Sprite::Sprite_get_texture
                        (in_stack_6,(MethodInfo *)0x0);
          if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          y = (Texture2D *)0x0;
code_?:
          bVar4 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                            ((Object_1 *)x,(Object_1 *)y,(MethodInfo *)0x0);
          (in_stack_5->fields)._._.m_SkipMaterialUpdate = bVar4;
          (in_stack_5->fields).m_Sprite = in_stack_6;
          func_?();
          UnityEngine.UI.dll::UnityEngine::UI::Image::
          Image__set_sprite_g__ResetAlphaHitThresholdIfNeeded_11_0
                    (in_stack_5,(MethodInfo *)0x0);
          (*(code *)(in_stack_5->klass->vtable).SetAllDirty.method)();
          UnityEngine.UI.dll::UnityEngine::UI::Image::Image_TrackSprite
                    (in_stack_5,(MethodInfo *)0x0);
          return;
        }
      }
      else {
        pSVar2 = (in_stack_5->fields).m_Sprite;
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__UnityEngine__Object);
        }
        bVar4 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                          ((Object_1 *)pSVar2,(Object_1 *)in_stack_6,(MethodInfo *)0x0);
        if (bVar4 == 0) {
          return;
        }
        pSVar2 = (in_stack_5->fields).m_Sprite;
        if (pSVar2 != (Sprite *)0x0) {
          pRVar7 = UnityEngine.CoreModule.dll::UnityEngine::Sprite::Sprite_get_rect
                             ((Rect *)&stack0xffffffc0,pSVar2,(MethodInfo *)0x0);
          fVar9 = pRVar7->m_Height;
          if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          pRVar7 = (Rect *)0x0;
          bVar4 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Implicit
                            ((Object_1 *)in_stack_6,(MethodInfo *)0x0);
          if (bVar4 == 0) {
            VVar10 = RTG::RightAngTriangle2D::RightAngTriangle2D_get_ModelRightAngleCorner
                               ((MethodInfo *)0x0);
            fVar11 = VVar10.y;
          }
          else {
            if (in_stack_6 == (Sprite *)0x0) goto code_?;
            pRVar7 = (Rect *)&stack0xffffffe8;
            pRVar12 = UnityEngine.CoreModule.dll::UnityEngine::Sprite::Sprite_get_rect
                               (pRVar7,in_stack_6,(MethodInfo *)0x0);
            fVar3 = pRVar12->m_Width;
            fVar11 = pRVar12->m_Height;
          }
          if (((float)pRVar7 == fVar3) && (fVar9 == fVar11)) {
            bVar4 = 1;
          }
          else {
            bVar4 = 0;
          }
          (in_stack_5->fields)._._.m_SkipLayoutUpdate = bVar4;
          pSVar2 = (in_stack_5->fields).m_Sprite;
          if (pSVar2 != (Sprite *)0x0) {
            x = UnityEngine.CoreModule.dll::UnityEngine::Sprite::Sprite_get_texture
                          (pSVar2,(MethodInfo *)0x0);
            if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            bVar4 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Implicit
                              ((Object_1 *)in_stack_6,(MethodInfo *)0x0);
            if (bVar4 == 0) {
              y = (Texture2D *)0x0;
            }
            else {
              if (in_stack_6 == (Sprite *)0x0) goto code_?;
              y = UnityEngine.CoreModule.dll::UnityEngine::Sprite::Sprite_get_texture
                            (in_stack_6,(MethodInfo *)0x0);
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
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
  }
  func_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
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

