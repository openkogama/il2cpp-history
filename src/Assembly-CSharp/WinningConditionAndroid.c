
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
                        ((Object_1 *)sprite,(Object_1 *)0x0,(MethodInfo *)0x0);
      if (bVar2 == 0) {
        return;
      }
      if (sprite != (Sprite *)0x0) {
        pRVar3 = UnityEngine.CoreModule.dll::UnityEngine::Sprite::Sprite_get_rect
                           ((Rect *)&stack0xffffffb0,sprite,(MethodInfo *)0x0);
        auStack_4._0_4_ = pRVar3->m_XMin;
        auStack_4._4_4_ = pRVar3->m_YMin;
        auStack_4._8_4_ = pRVar3->m_Width;
        pTStack_5 = (Texture2D *)pRVar3->m_Height;
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        fVar6 = (float)auStack_4._8_4_ -
                (TypeInfo__UnityEngine__Vector2->static_fields->zeroVector).x;
        fVar7 = (float)pTStack_5 - (TypeInfo__UnityEngine__Vector2->static_fields->zeroVector).y;
        (this_00->fields)._._.m_SkipLayoutUpdate = fVar7 * fVar7 + fVar6 * fVar6 < _UNK_?;
        pTStack_8 = UnityEngine.CoreModule.dll::UnityEngine::Sprite::Sprite_get_texture
                               (sprite,(MethodInfo *)0x0);
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        pTVar9 = pTStack_8;
        y = (Texture2D *)0x0;
code_?:
        bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                          ((Object_1 *)pTVar9,(Object_1 *)y,(MethodInfo *)0x0);
        (this_00->fields)._._.m_SkipMaterialUpdate = bVar2;
        (this_00->fields).m_Sprite = sprite;
        func_?();
        UnityEngine.UI.dll::UnityEngine::UI::Image::
        Image__set_sprite_g__ResetAlphaHitThresholdIfNeeded_11_0(this_00,(MethodInfo *)0x0);
        (*(code *)(this_00->klass->vtable).SetAllDirty.method)();
        UnityEngine.UI.dll::UnityEngine::UI::Image::Image_TrackSprite(this_00,(MethodInfo *)0x0);
        return;
      }
    }
    else {
      pTStack_8 = (Texture2D *)(this_00->fields).m_Sprite;
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                        ((Object_1 *)pTStack_8,(Object_1 *)sprite,(MethodInfo *)0x0);
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
                          ((Object_1 *)sprite,(MethodInfo *)0x0);
        if (bVar2 == 0) {
          VVar10 = RTG::RightAngTriangle2D::RightAngTriangle2D_get_ModelRightAngleCorner
                            ((MethodInfo *)0x0);
          pTStack_5 = (Texture2D *)VVar10.y;
          pTVar9 = pTStack_5;
          fVar7 = (float)auStack_4._8_4_;
          unique0x100005fc = VVar10;
        }
        else {
          if (sprite == (Sprite *)0x0) goto code_?;
          pRVar3 = (Rect *)auStack_4;
          pRVar11 = UnityEngine.CoreModule.dll::UnityEngine::Sprite::Sprite_get_rect
                             (pRVar3,sprite,(MethodInfo *)0x0);
          pTVar9 = (Texture2D *)pRVar11->m_Height;
          fVar7 = pRVar11->m_Width;
        }
        if (((float)pRVar3 == fVar7) && (fVar6 == (float)pTVar9)) {
          bVar2 = 1;
        }
        else {
          bVar2 = 0;
        }
        (this_00->fields)._._.m_SkipLayoutUpdate = bVar2;
        pSVar1 = (this_00->fields).m_Sprite;
        if (pSVar1 != (Sprite *)0x0) {
          pTVar9 = UnityEngine.CoreModule.dll::UnityEngine::Sprite::Sprite_get_texture
                             (pSVar1,(MethodInfo *)0x0);
          pTStack_5 = pTVar9;
          if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Implicit
                            ((Object_1 *)sprite,(MethodInfo *)0x0);
          if (bVar2 == 0) {
            pTStack_8 = (Texture2D *)0x0;
          }
          else {
            if (sprite == (Sprite *)0x0) goto code_?;
            pTStack_8 = UnityEngine.CoreModule.dll::UnityEngine::Sprite::Sprite_get_texture
                                   (sprite,(MethodInfo *)0x0);
          }
          if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          pTVar9 = pTStack_5;
          y = pTStack_8;
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

