
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
    pIVar1 = (this->fields).canUseSprite;
    if (pIVar1 != (Image *)0x0) {
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
                             ((Rect *)&stack0xffffffe8,in_stack_5,(MethodInfo *)0x0);
          VVar7 = UnityEngine.CoreModule.dll::UnityEngine::Rect::Rect_get_size
                            ((Rect *)pRVar6->m_YMin,(MethodInfo *)pRVar6->m_Width);
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          this = (RequirementPanel *)VVar7.y;
          fVar8 = VVar7.x - (TypeInfo__UnityEngine__Vector2->static_fields->zeroVector).x;
          fVar9 = (float)this - (TypeInfo__UnityEngine__Vector2->static_fields->zeroVector).y;
          (in_stack_4->fields)._._.m_SkipLayoutUpdate =
               fVar9 * fVar9 + fVar8 * fVar8 < _UNK_?;
          canAffordSprite =
               (Sprite *)
               UnityEngine.CoreModule.dll::UnityEngine::Sprite::Sprite_get_texture
                         (in_stack_5,(MethodInfo *)0x0);
          if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          method = (MethodInfo *)0x0;
code_?:
          bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                            ((Object_1 *)canAffordSprite,(Object_1 *)method,(MethodInfo *)0x0);
          (in_stack_4->fields)._._.m_SkipMaterialUpdate = bVar3;
          (in_stack_4->fields).m_Sprite = in_stack_5;
          func_?();
          (*(in_stack_4->klass->vtable).SetAllDirty.methodPtr)();
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
                             ((Rect *)&stack0xffffffe8,pSVar2,(MethodInfo *)0x0);
          UnityEngine.CoreModule.dll::UnityEngine::Rect::Rect_get_size
                    ((Rect *)pRVar6->m_YMin,(MethodInfo *)pRVar6->m_Width);
          if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          uVar10 = ZEXT48(in_stack_5);
          bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Implicit
                            ((Object_1 *)in_stack_5,(MethodInfo *)0x0);
          if (bVar3 == 0) {
            fVar8 = (float)func_?();
          }
          else {
            if (in_stack_5 == (Sprite *)0x0) goto code_?;
            puVar11 = &UNK_?;
            UnityEngine.CoreModule.dll::UnityEngine::Sprite::Sprite_get_rect
                      ((Rect *)&stack0xfffffff8,in_stack_5,(MethodInfo *)0x0);
            uVar10 = CONCAT44(&UNK_?,puVar11);
            VVar7 = UnityEngine.CoreModule.dll::UnityEngine::Rect::Rect_get_size
                              ((Rect *)&stack0xffffffd8,(MethodInfo *)0x0);
            fVar8 = VVar7.x;
          }
          if (((float)uVar10 == fVar8) && ((float)(uVar10 >> 0x20) == (float)pIVar1)) {
            bVar3 = 1;
          }
          else {
            bVar3 = 0;
          }
          (in_stack_4->fields)._._.m_SkipLayoutUpdate = bVar3;
          pSVar2 = (in_stack_4->fields).m_Sprite;
          if (pSVar2 != (Sprite *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Sprite::Sprite_get_texture
                      (pSVar2,(MethodInfo *)0x0);
            if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Implicit
                              ((Object_1 *)in_stack_5,(MethodInfo *)0x0);
            if (bVar3 == 0) {
              method = (MethodInfo *)0x0;
            }
            else {
              if (in_stack_5 == (Sprite *)0x0) goto code_?;
              method = (MethodInfo *)
                       UnityEngine.CoreModule.dll::UnityEngine::Sprite::Sprite_get_texture
                                 (in_stack_5,(MethodInfo *)0x0);
            }
            if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            canAffordSprite = (Sprite *)0x0;
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
    (*(pTVar1->klass->vtable).set_text.methodPtr)
              (pTVar1,pSVar2,(pTVar1->klass->vtable).set_text.method);
    return;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

