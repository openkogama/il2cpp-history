
/* Void HideLimit() */

void Assembly-CSharp.dll::WinningConditionAndroid::WinningConditionAndroid_HideLimit
               (WinningConditionAndroid *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    pMStack_1 = (MethodInfo *)&::StringLiteral__;
    func_?();
    cRam_? = '\x01';
  }
  pTStack_2 = (this->fields).limit;
  if (pTStack_2 != (Text *)0x0) {
    pMStack_1 = (pTStack_2->klass->vtable).set_text.method;
    pSStack_3 = ::StringLiteral__;
    (*(pTStack_2->klass->vtable).set_text.methodPtr)();
    return;
  }
  pMStack_1 = (MethodInfo *)&stack0xfffffffc;
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
  if (*(GameObject **)(unaff_ESI + 0x14) != (GameObject *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (*(GameObject **)(unaff_ESI + 0x14),1,(MethodInfo *)0x0);
    if (*(int **)(unaff_ESI + 0x10) != (int *)0x0) {
      iVar2 = **(int **)(unaff_ESI + 0x10);
      puStack3 = *(undefined **)(iVar2 + 0x318);
      (**(code **)(iVar2 + 0x314))();
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
    (*(pTVar1->klass->vtable).set_text.methodPtr)
              (pTVar1,pSVar2,(pTVar1->klass->vtable).set_text.method);
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
                        ((Object_1 *)sprite,(Object_1 *)0x0,(MethodInfo *)0x0);
      if (bVar4 == 0) {
        return;
      }
      if (sprite != (Sprite *)0x0) {
        pRVar5 = UnityEngine.CoreModule.dll::UnityEngine::Sprite::Sprite_get_rect
                           ((Rect *)&stack0xffffffdc,sprite,(MethodInfo *)0x0);
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
                      (sprite,(MethodInfo *)0x0);
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        y = (Texture2D *)0x0;
code_?:
        bVar4 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                          ((Object_1 *)x,(Object_1 *)y,(MethodInfo *)0x0);
        (this_00->fields)._._.m_SkipMaterialUpdate = bVar4;
        (this_00->fields).m_Sprite = sprite;
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
                        ((Object_1 *)pSVar3,(Object_1 *)sprite,(MethodInfo *)0x0);
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
        uVar8 = ZEXT48(sprite);
        bVar4 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Implicit
                          ((Object_1 *)sprite,(MethodInfo *)0x0);
        if (bVar4 == 0) {
          fVar7 = (float)func_?();
        }
        else {
          if (sprite == (Sprite *)0x0) goto code_?;
          puVar9 = &UNK_?;
          UnityEngine.CoreModule.dll::UnityEngine::Sprite::Sprite_get_rect
                    ((Rect *)&stack0xffffffec,sprite,(MethodInfo *)0x0);
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
                            ((Object_1 *)sprite,(MethodInfo *)0x0);
          if (bVar4 == 0) {
            y = (Texture2D *)0x0;
          }
          else {
            if (sprite == (Sprite *)0x0) goto code_?;
            y = UnityEngine.CoreModule.dll::UnityEngine::Sprite::Sprite_get_texture
                          (sprite,(MethodInfo *)0x0);
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

