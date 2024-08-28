
/* Void HideLimit() */

void Assembly-CSharp.dll::WinningConditionAndroid::WinningConditionAndroid_HideLimit
               (WinningConditionAndroid *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    ppSStack_1 = &::StringLiteral__;
    func_?();
    cRam_? = '\x01';
  }
  pTStack_2 = (this->fields).limit;
  if (pTStack_2 != (Text *)0x0) {
    ppSStack_1 = (String **)(pTStack_2->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr;
    pSStack_3 = ::StringLiteral__;
    (*(code *)(pTStack_2->klass->vtable).set_text.method)();
    return;
  }
  ppSStack_1 = (String **)&stack0xfffffffc;
  uVar4 = func_?(&pTStack_2);
  func_?(uVar4);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void SetAdditionalInformation(String) */

void Assembly-CSharp.dll::WinningConditionAndroid::WinningConditionAndroid_SetAdditionalInformation
               (WinningConditionAndroid *this,String *info,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&::StringLiteral__);
    cRam_? = '\x01';
  }
  bVar1 = mscorlib.dll::System::String::String_op_Equality(info,::StringLiteral__,(MethodInfo *)0x0)
  ;
  if (bVar1 != 0) {
    return;
  }
  if (*(GameObject **)(unaff_ESI + 0x18) != (GameObject *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (*(GameObject **)(unaff_ESI + 0x18),1,(MethodInfo *)0x0);
    if (*(int **)(unaff_ESI + 0x14) != (int *)0x0) {
      iVar2 = **(int **)(unaff_ESI + 0x14);
      puStack3 = *(undefined **)(iVar2 + 0x31c);
      (**(code **)(iVar2 + 0x318))();
      return;
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void SetLimit(Int32) */

void Assembly-CSharp.dll::WinningConditionAndroid::WinningConditionAndroid_SetLimit
               (WinningConditionAndroid *this,int32_t limit,MethodInfo *method)

{
  pTVar1 = (this->fields).limit;
  pSVar2 = mscorlib.dll::System::Int32::Int32_ToString((Int32 *)&limit,(MethodInfo *)0x0);
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


/* Void SetSprite(Sprite) */

void Assembly-CSharp.dll::WinningConditionAndroid::WinningConditionAndroid_SetSprite
               (WinningConditionAndroid *this,Sprite *sprite,MethodInfo *method)

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
                        ((Object_1 *)sprite,(Object_1 *)0x0,(MethodInfo *)0x0);
      if (bVar3 == 0) {
        return;
      }
      if (sprite != (Sprite *)0x0) {
        pRVar4 = UnityEngine.CoreModule.dll::UnityEngine::Sprite::Sprite_get_rect
                           ((Rect *)&stack0xffffffb0,sprite,(MethodInfo *)0x0);
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
                               (sprite,(MethodInfo *)0x0);
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                          ((Object_1 *)pTStack_1,(Object_1 *)0x0,(MethodInfo *)0x0);
        (this_00->fields)._._.m_SkipMaterialUpdate = bVar3;
        *ppSVar2 = sprite;
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
                        ((Object_1 *)pTStack_1,(Object_1 *)sprite,(MethodInfo *)0x0);
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
                          ((Object_1 *)sprite,(MethodInfo *)0x0);
        if (bVar3 == 0) {
          uVar9 = func_?();
          RStack_5._8_8_ = uVar9;
        }
        else {
          if (sprite == (Sprite *)0x0) goto code_?;
          pRVar4 = &RStack_5;
          pRVar10 = UnityEngine.CoreModule.dll::UnityEngine::Sprite::Sprite_get_rect
                             (pRVar4,sprite,(MethodInfo *)0x0);
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
                            ((Object_1 *)sprite,(MethodInfo *)0x0);
          if (bVar3 == 0) {
            pTStack_1 = (Texture2D *)0x0;
          }
          else {
            if (sprite == (Sprite *)0x0) goto code_?;
            pTStack_1 = UnityEngine.CoreModule.dll::UnityEngine::Sprite::Sprite_get_texture
                                   (sprite,(MethodInfo *)0x0);
          }
          if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                            ((Object_1 *)RStack_5.m_Height,(Object_1 *)pTStack_1,(MethodInfo *)0x0
                            );
          (this_00->fields)._._.m_SkipMaterialUpdate = bVar3;
          (this_00->fields).m_Sprite = sprite;
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

