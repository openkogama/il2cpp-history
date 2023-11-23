
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
                               (sprite,(MethodInfo *)0x0);
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        pTVar8 = pTStack_7;
        y = (Texture2D *)0x0;
code_?:
        bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                          ((Object_1 *)pTVar8,(Object_1 *)y,(MethodInfo *)0x0);
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
      pTStack_7 = (Texture2D *)(this_00->fields).m_Sprite;
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                        ((Object_1 *)pTStack_7,(Object_1 *)sprite,(MethodInfo *)0x0);
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
                          ((Object_1 *)sprite,(MethodInfo *)0x0);
        if (bVar2 == 0) {
          uVar9 = func_?();
          RStack_4._8_8_ = uVar9;
        }
        else {
          if (sprite == (Sprite *)0x0) goto code_?;
          pRVar3 = &RStack_4;
          pRVar10 = UnityEngine.CoreModule.dll::UnityEngine::Sprite::Sprite_get_rect
                             (pRVar3,sprite,(MethodInfo *)0x0);
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
                            ((Object_1 *)sprite,(MethodInfo *)0x0);
          if (bVar2 == 0) {
            pTStack_7 = (Texture2D *)0x0;
          }
          else {
            if (sprite == (Sprite *)0x0) goto code_?;
            pTStack_7 = UnityEngine.CoreModule.dll::UnityEngine::Sprite::Sprite_get_texture
                                   (sprite,(MethodInfo *)0x0);
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

