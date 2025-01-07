
/* Void Awake() */

void Assembly-CSharp.dll::ChatBubble::ChatBubble_Awake(ChatBubble *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__ExtenderBorderInfo);
    func_?(&TypeInfo__ExtenderBorderInfo);
    cRam_? = '\x01';
  }
  if ((this->fields).ExtenderBorderInfo != (ExtenderBorderInfo__Array *)0x0) {
    return;
  }
  method_00 = (ExtenderBorderInfo__Array *)func_?(TypeInfo__ExtenderBorderInfo,4);
  (this->fields).ExtenderBorderInfo = method_00;
  func_?(&(this->fields).ExtenderBorderInfo);
  pEVar1 = (this->fields).ExtenderBorderInfo;
  method_01 = TypeInfo__ExtenderBorderInfo;
  pEVar2 = (ExtenderBorderInfo *)func_?();
  (pEVar2->fields).Enabled = 1;
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)pEVar2,ExceptionArgument__Enum_obj,(MethodInfo *)method_01);
  (pEVar2->fields).Border = 0;
  if (pEVar1 == (ExtenderBorderInfo__Array *)0x0) {
code_?:
    func_?();
code_?:
    uVar3 = func_?(0);
    func_?(uVar3);
code_?:
    uVar3 = func_?(0);
    func_?(uVar3);
code_?:
    uVar3 = func_?(0);
    func_?(uVar3);
  }
  else {
    iVar4 = func_?(pEVar2,(pEVar1->klass->_0).element_class);
    if (iVar4 == 0) goto code_?;
    if (pEVar1->max_length == 0) goto code_?;
    pEVar1->vector[0] = pEVar2;
    func_?(pEVar1->vector,pEVar2);
    pEVar1 = (this->fields).ExtenderBorderInfo;
    pEVar2 = (ExtenderBorderInfo *)func_?(TypeInfo__ExtenderBorderInfo);
    (pEVar2->fields).Enabled = 1;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)pEVar2,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
    (pEVar2->fields).Border = 1;
    if (pEVar1 == (ExtenderBorderInfo__Array *)0x0) goto code_?;
    iVar4 = func_?(pEVar2,(pEVar1->klass->_0).element_class);
    if (iVar4 == 0) goto code_?;
    if (pEVar1->max_length < 2) goto code_?;
    pEVar1->vector[1] = pEVar2;
    func_?(pEVar1->vector + 1,pEVar2);
    pEVar1 = (this->fields).ExtenderBorderInfo;
    pEVar2 = (ExtenderBorderInfo *)func_?(TypeInfo__ExtenderBorderInfo);
    (pEVar2->fields).Enabled = 1;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)pEVar2,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
    (pEVar2->fields).Border = 2;
    if (pEVar1 == (ExtenderBorderInfo__Array *)0x0) goto code_?;
    iVar4 = func_?(pEVar2,(pEVar1->klass->_0).element_class);
    if (iVar4 == 0) goto code_?;
    if (pEVar1->max_length < 3) goto code_?;
    pEVar1->vector[2] = pEVar2;
    func_?(pEVar1->vector + 2,pEVar2);
    pEVar1 = (this->fields).ExtenderBorderInfo;
    pEVar2 = (ExtenderBorderInfo *)func_?(TypeInfo__ExtenderBorderInfo);
    (pEVar2->fields).Enabled = 1;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)pEVar2,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
    (pEVar2->fields).Border = 3;
    if (pEVar1 == (ExtenderBorderInfo__Array *)0x0) goto code_?;
    iVar4 = func_?(pEVar2,(pEVar1->klass->_0).element_class);
    if (iVar4 != 0) {
      if (3 < pEVar1->max_length) {
        pEVar1->vector[3] = pEVar2;
        func_?(pEVar1->vector + 3,pEVar2);
        return;
      }
      goto code_?;
    }
  }
  uVar3 = func_?(0);
  func_?(uVar3);
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Boolean BindExtenderDock(ExtenderBorderEnum) */

bool Assembly-CSharp.dll::ChatBubble::ChatBubble_BindExtenderDock
               (ChatBubble *this,ExtenderBorderEnum__Enum value,MethodInfo *method)

{
  if ((this->fields).ExtenderDock != value) {
    (this->fields).ExtenderDock = value;
    ChatBubble_PerformExtenderSnap(this,(MethodInfo *)0x0);
    ChatBubble_PerformExtenderPosition(this,(MethodInfo *)0x0);
    return 1;
  }
  return 0;
}


/* Void BindExtenderToClosestBorder(Camera) */

void Assembly-CSharp.dll::ChatBubble::ChatBubble_BindExtenderToClosestBorder
               (ChatBubble *this,Camera *camera,MethodInfo *method)

{
  this_00 = camera;
  if ((camera != (Camera *)0x0) &&
     (pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                          ((Component *)camera,(MethodInfo *)0x0), pTVar1 != (Transform *)0x0)) {
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
              ((Vector3 *)&stack0xffffffd4,pTVar1,(MethodInfo *)0x0);
    pCVar2 = (this->fields).anchor;
    if ((pCVar2 != (ChatAnchor *)0x0) &&
       (pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            ((Component *)pCVar2,(MethodInfo *)0x0), pTVar1 != (Transform *)0x0)) {
      pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                          ((Vector3 *)&stack0xffffffe0,pTVar1,(MethodInfo *)0x0);
      method_00 = pVVar3->x;
      pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                          ((Component *)camera,(MethodInfo *)method_00);
      if (pTVar1 != (Transform *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up
                  ((Vector3 *)&stack0xffffffc8,pTVar1,(MethodInfo *)0x0);
        pCVar2 = (this->fields).anchor;
        if ((pCVar2 != (ChatAnchor *)0x0) &&
           (pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                ((Component *)pCVar2,(MethodInfo *)0x0), pTVar1 != (Transform *)0x0
           )) {
          pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                              ((Vector3 *)&stack0xffffffc8,pTVar1,(MethodInfo *)0x0);
          uVar4._0_4_ = pVVar3->x;
          uVar4._4_4_ = pVVar3->y;
          fVar5 = pVVar3->z;
          puVar6 = &UNK_?;
          pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                              ((Component *)camera,(MethodInfo *)0x0);
          if (pTVar1 != (Transform *)0x0) {
            pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up
                                ((Vector3 *)&stack0xffffffc8,pTVar1,(MethodInfo *)0x0);
            uVar7 = pVVar3->x;
            uVar8 = pVVar3->y;
            fVar9 = (float)uVar4 - (3.558437e-29 - (float)uVar7);
            fVar10 = SUB84(uVar4,4) - (3.558444e-29 - (float)uVar8);
            fVar5 = fVar5 - ((float)puVar6 - pVVar3->z);
            pCVar11 = (Camera *)(fVar9 * fVar9 + fVar10 * fVar10 + fVar5 * fVar5);
            camera = (Camera *)&stack0xffffffc8;
            if ((float)pCVar11 <= (float)&stack0xffffffc8) {
              camera = pCVar11;
            }
            iVar12 = 0;
            if ((float)&stack0xffffffc8 < (float)pCVar11) {
              iVar12 = 3;
            }
            pCVar2 = (this->fields).anchor;
            if ((pCVar2 != (ChatAnchor *)0x0) &&
               (pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                          Component_get_transform((Component *)pCVar2,(MethodInfo *)0x0),
               pTVar1 != (Transform *)0x0)) {
              pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                  ((Vector3 *)&stack0xffffffc8,pTVar1,(MethodInfo *)0x0);
              uVar13._0_4_ = pVVar3->x;
              uVar13._4_4_ = pVVar3->y;
              fVar5 = pVVar3->z;
              pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                  ((Component *)this_00,(MethodInfo *)0x0);
              if (pTVar1 != (Transform *)0x0) {
                pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_right
                                    ((Vector3 *)&stack0xffffffc8,pTVar1,(MethodInfo *)0x0);
                uVar14 = pVVar3->x;
                uVar15 = pVVar3->y;
                fVar9 = (float)uVar13 - ((float)uVar14 + 3.558437e-29);
                fVar10 = SUB84(uVar13,4) - ((float)uVar15 + 3.558444e-29);
                fVar5 = fVar5 - ((float)puVar6 + pVVar3->z);
                pCVar2 = (this->fields).anchor;
                fVar5 = fVar9 * fVar9 + fVar10 * fVar10 + fVar5 * fVar5;
                if ((pCVar2 != (ChatAnchor *)0x0) &&
                   (pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                              Component_get_transform((Component *)pCVar2,(MethodInfo *)0x0),
                   pTVar1 != (Transform *)0x0)) {
                  pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                            Transform_get_position
                                      ((Vector3 *)&stack0xffffffc8,pTVar1,(MethodInfo *)0x0);
                  uVar16._0_4_ = pVVar3->x;
                  uVar16._4_4_ = pVVar3->y;
                  fVar10 = pVVar3->z;
                  pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                            Component_get_transform((Component *)this_00,(MethodInfo *)0x0);
                  if (pTVar1 != (Transform *)0x0) {
                    pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                              Transform_get_right((Vector3 *)&stack0xffffffc8,pTVar1,
                                                  (MethodInfo *)0x0);
                    uVar17 = pVVar3->x;
                    uVar18 = pVVar3->y;
                    fVar9 = (float)uVar16 - (3.558437e-29 - (float)uVar17);
                    fVar19 = SUB84(uVar16,4) - (3.558444e-29 - (float)uVar18);
                    fVar10 = fVar10 - ((float)puVar6 - pVVar3->z);
                    fVar9 = fVar19 * fVar19 + fVar9 * fVar9 + fVar10 * fVar10;
                    fVar10 = fVar5;
                    if (fVar9 <= fVar5) {
                      fVar10 = fVar9;
                    }
                    iVar20 = (this->fields).ExtenderDock;
                    if (fVar10 < (float)camera) {
                      iVar12 = (fVar5 < fVar9) + 1;
                      if (iVar20 == iVar12) {
                        return;
                      }
                      (this->fields).ExtenderDock = iVar12;
                    }
                    else {
                      if (iVar20 == iVar12) {
                        return;
                      }
                      (this->fields).ExtenderDock = iVar12;
                    }
                    ChatBubble_PerformExtenderSnap(this,(MethodInfo *)0x0);
                    ChatBubble_PerformExtenderPosition(this,(MethodInfo *)0x0);
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar21 = (code *)swi(3);
  (*pcVar21)();
  return;
}


/* Boolean BindMessageValue(String) */

bool Assembly-CSharp.dll::ChatBubble::ChatBubble_BindMessageValue
               (ChatBubble *this,String *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&::StringLiteral____);
    cRam_? = '\x01';
  }
  if ((this->fields).isActive == 0) {
    return 0;
  }
  if (value != (String *)0x0) {
    if (0x82 < (value->fields)._stringLength) {
      pSVar1 = mscorlib.dll::System::String::String_Substring_1(value,0,0x82,(MethodInfo *)0x0);
      value = mscorlib.dll::System::String::String_Concat_3
                        (pSVar1,::StringLiteral____,(MethodInfo *)0x0);
    }
    (this->fields).MessageValue = value;
    func_?();
    pTVar2 = (this->fields).MessageComponent;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Implicit
                      ((Object_1 *)pTVar2,(MethodInfo *)0x0);
    if (bVar3 == 0) {
      return 0;
    }
    pTVar2 = (this->fields).MessageComponent;
    if (pTVar2 != (Text *)0x0) {
      pSVar1 = (String *)
               (*(code *)(pTVar2->klass->vtable).get_text.method)
                         (pTVar2,(pTVar2->klass->vtable).set_text.methodPtr);
      bVar3 = mscorlib.dll::System::String::String_op_Inequality(pSVar1,value,(MethodInfo *)0x0);
      if ((bVar3 != 0) ||
         (fVar4 = (this->fields).timeUntilFade,
         fVar5 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0),
         fVar4 < fVar5)) {
        pAVar6 = (this->fields).PopUpSound;
        if (pAVar6 == (AudioSource *)0x0) goto code_?;
        bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_get_isActiveAndEnabled
                          ((Behaviour *)pAVar6,(MethodInfo *)0x0);
        if (bVar3 != 0) {
          pAVar6 = (this->fields).PopUpSound;
          if (pAVar6 == (AudioSource *)0x0) goto code_?;
          UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_Play_1
                    (pAVar6,(MethodInfo *)0x0);
        }
      }
      pTVar2 = (this->fields).MessageComponent;
      if (pTVar2 != (Text *)0x0) {
        (*(code *)(pTVar2->klass->vtable).set_text.method)
                  (pTVar2,value,(pTVar2->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
        if ((this->fields).AutoSize != 0) {
          ChatBubble_PerformAutoSize(this,(MethodInfo *)0x0);
        }
        this_00 = (this->fields).CanvasGroup;
        (this->fields).currentFade = 1.0;
        if (this_00 != (CanvasGroup *)0x0) {
          UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                    (this_00,1.0,(MethodInfo *)0x0);
          fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
          pSVar1 = (this->fields).MessageValue;
          if (pSVar1 != (String *)0x0) {
            fVar4 = (float)(pSVar1->fields)._stringLength / _UNK_? + fVar4 + _UNK_?;
            pfVar7 = &(this->fields).timeUntilFade;
            if (*pfVar7 <= fVar4 && fVar4 != *pfVar7) {
              (this->fields).timeUntilFade = fVar4;
            }
            pCVar8 = (this->fields).anchor;
            if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
              func_?(TypeInfo__UnityEngine__Object);
            }
            bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                              ((Object_1 *)pCVar8,(Object_1 *)0x0,(MethodInfo *)0x0);
            if (bVar3 == 0) {
              return 1;
            }
            pCVar8 = (this->fields).anchor;
            if (pCVar8 != (ChatAnchor *)0x0) {
              (pCVar8->fields).snapTracking = 1;
              pCVar8 = (this->fields).anchor;
              if (pCVar8 != (ChatAnchor *)0x0) {
                ChatAnchor::ChatAnchor_UpdateAttachedBubblePosition(pCVar8,(MethodInfo *)0x0);
                return 1;
              }
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar9 = (code *)swi(3);
  bVar3 = (*pcVar9)();
  return bVar3;
}


/* WARNING: Instruction at (ram,0xADDR) overlaps instruction at (ram,0xADDR)
    */
/* Void CalculateExtenderBorderVertices(ExtenderBorderInfo, Vector3 ByRef, Vector3 ByRef) */

void Assembly-CSharp.dll::ChatBubble::ChatBubble_CalculateExtenderBorderVertices
               (ChatBubble *this,ExtenderBorderInfo *info,Vector3 *v1,Vector3 *v2,MethodInfo *method
               )

{
  this_00 = (Transform *)ChatBubble_get_rectTransform(this,(MethodInfo *)0x0);
  if (this_00 != (Transform *)0x0) {
    pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                       ((Vector3 *)&stack0xfffffff0,this_00,(MethodInfo *)0x0);
    fVar2 = pVVar1->z;
    v2->z = fVar2;
    v1->z = fVar2;
    this_01 = ChatBubble_get_rectTransform(this,(MethodInfo *)0x0);
    if (this_01 != (RectTransform *)0x0) {
      VVar3 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_sizeDelta
                        (this_01,(MethodInfo *)0x0);
      fVar2 = unaff_ESI * _UNK_?;
      fStack_4 = VVar3.y;
      fStack_4 = fStack_4 * _UNK_?;
      if (info != (ExtenderBorderInfo *)0x0) {
        switch((info->fields).Border) {
        case 0:
          fStack_4 = (float)((uint)fStack_4 ^
                            __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                            );
          v1->x = (float)((uint)fVar2 ^
                         __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field) +
                  (info->fields).CutoffNear;
          v2->x = fVar2 - (info->fields).CutoffFar;
          fStack_4 = fStack_4 + (info->fields).Margin;
          v2->y = fStack_4;
          v1->y = fStack_4;
          break;
        case 1:
          fVar2 = (float)((uint)fVar2 ^
                         __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
          v1->y = (float)((uint)fStack_4 ^
                         __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field) +
                  (info->fields).CutoffNear;
          v2->y = fStack_4 - (info->fields).CutoffFar;
          fVar2 = fVar2 + (info->fields).Margin;
          v2->x = fVar2;
          v1->x = fVar2;
          return;
        case 2:
          v1->y = (float)((uint)fStack_4 ^
                         __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field) +
                  (info->fields).CutoffNear;
          v2->y = fStack_4 - (info->fields).CutoffFar;
          fVar2 = fVar2 - (info->fields).Margin;
          v2->x = fVar2;
          v1->x = fVar2;
          return;
        case 3:
          v1->x = (float)((uint)fVar2 ^
                         __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field) +
                  (info->fields).CutoffNear;
          v2->x = fVar2 - (info->fields).CutoffFar;
          fStack_4 = fStack_4 - (info->fields).Margin;
          v2->y = fStack_4;
          v1->y = fStack_4;
          return;
        }
        return;
      }
    }
  }
  func_?();
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void HideBubble() */

void Assembly-CSharp.dll::ChatBubble::ChatBubble_HideBubble(ChatBubble *this,MethodInfo *method)

{
  (this->fields).timeUntilFade = 0.0;
  (this->fields).currentFade = 0.0;
  this_00 = (this->fields).CanvasGroup;
  if (this_00 != (CanvasGroup *)0x0) {
    UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
              (this_00,0.0,(MethodInfo *)0x0);
    return;
  }
  uVar1 = func_?(&stack0xfffffff0);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OnDisable() */

void Assembly-CSharp.dll::ChatBubble::ChatBubble_OnDisable(ChatBubble *this,MethodInfo *method)

{
  (this->fields).isActive = 0;
  (this->fields).timeUntilFade = 0.0;
  (this->fields).currentFade = 0.0;
  this_00 = (this->fields).CanvasGroup;
  if (this_00 != (CanvasGroup *)0x0) {
    UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
              (this_00,0.0,(MethodInfo *)0x0);
    return;
  }
  uVar1 = func_?(&stack0xfffffff0);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OnEnable() */

void Assembly-CSharp.dll::ChatBubble::ChatBubble_OnEnable(ChatBubble *this,MethodInfo *method)

{
  (this->fields).isActive = 1;
  return;
}


/* Boolean PerformAutoHeight() */

bool Assembly-CSharp.dll::ChatBubble::ChatBubble_PerformAutoHeight
               (ChatBubble *this,MethodInfo *method)

{
  pTVar1 = (this->fields).MessageComponent;
  if (pTVar1 != (Text *)0x0) {
    pRVar2 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                       ((Graphic *)pTVar1,(MethodInfo *)0x0);
    if (pRVar2 != (RectTransform *)0x0) {
      pRVar3 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_rect
                         ((Rect *)&stack0xffffffd8,pRVar2,(MethodInfo *)0x0);
      fVar4 = pRVar3->m_Height;
      pTVar1 = (this->fields).MessageComponent;
      fVar5 = (this->fields).MessageMinimumSize.y;
      if (pTVar1 != (Text *)0x0) {
        pRVar2 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                           ((Graphic *)pTVar1,(MethodInfo *)0x0);
        fVar6 = UnityEngine.UI.dll::UnityEngine::UI::LayoutUtility::LayoutUtility_GetPreferredHeight
                          (pRVar2,(MethodInfo *)0x0);
        if (fVar5 <= fVar6) {
          fVar5 = fVar6;
        }
        if (fVar4 == fVar5) {
          return 0;
        }
        pRVar2 = ChatBubble_get_rectTransform(this,(MethodInfo *)0x0);
        this_00 = ChatBubble_get_rectTransform(this,(MethodInfo *)0x0);
        if (this_00 != (RectTransform *)0x0) {
          pRVar3 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_rect
                             ((Rect *)&stack0xffffffd8,this_00,(MethodInfo *)0x0);
          if (pRVar2 != (RectTransform *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
            RectTransform_SetSizeWithCurrentAnchors
                      (pRVar2,RectTransform_Axis__Enum_Vertical,
                       (fVar5 - 3.5590066e-29) + pRVar3->m_Height,(MethodInfo *)0x0);
            return 1;
          }
        }
      }
    }
  }
  func_?();
  pcVar7 = (code *)swi(3);
  bVar8 = (*pcVar7)();
  return bVar8;
}


/* Void PerformAutoSize() */

void Assembly-CSharp.dll::ChatBubble::ChatBubble_PerformAutoSize
               (ChatBubble *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields).MessageComponent;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Implicit
                    ((Object_1 *)pTVar1,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    ChatBubble_PerformAutoHeight(this,(MethodInfo *)0x0);
    pTVar1 = (this->fields).MessageComponent;
    if ((pTVar1 != (Text *)0x0) &&
       (pRVar3 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                           ((Graphic *)pTVar1,(MethodInfo *)0x0), pRVar3 != (RectTransform *)0x0)) {
      UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_rect
                ((Rect *)&stack0xffffffd4,pRVar3,(MethodInfo *)0x0);
      pTVar1 = (this->fields).MessageComponent;
      fVar4 = (this->fields).MessageMinimumSize.x;
      fVar5 = (this->fields).MessageWrapWidth;
      if (pTVar1 != (Text *)0x0) {
        pRVar3 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                           ((Graphic *)pTVar1,(MethodInfo *)0x0);
        fVar6 = UnityEngine.UI.dll::UnityEngine::UI::LayoutUtility::LayoutUtility_GetPreferredWidth
                          (pRVar3,(MethodInfo *)0x0);
        if (fVar6 <= fVar5) {
          fVar5 = fVar6;
        }
        if (fVar4 <= fVar5) {
          fVar4 = fVar5;
        }
        if (fVar4 == 3.5590957e-29) {
          return;
        }
        pRVar3 = ChatBubble_get_rectTransform(this,(MethodInfo *)0x0);
        this_00 = ChatBubble_get_rectTransform(this,(MethodInfo *)0x0);
        if (this_00 != (RectTransform *)0x0) {
          pRVar7 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_rect
                             ((Rect *)&stack0xffffffd4,this_00,(MethodInfo *)0x0);
          if (pRVar3 != (RectTransform *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
            RectTransform_SetSizeWithCurrentAnchors
                      (pRVar3,RectTransform_Axis__Enum_Horizontal,
                       ((float)&stack0xffffffd4 - 3.5590957e-29) + pRVar7->m_Width,(MethodInfo *)0x0
                      );
            ChatBubble_PerformAutoHeight(this,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
    func_?();
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  return;
}


/* Boolean PerformAutoWidth() */

bool Assembly-CSharp.dll::ChatBubble::ChatBubble_PerformAutoWidth
               (ChatBubble *this,MethodInfo *method)

{
  pTVar1 = (this->fields).MessageComponent;
  if (pTVar1 != (Text *)0x0) {
    pRVar2 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                       ((Graphic *)pTVar1,(MethodInfo *)0x0);
    if (pRVar2 != (RectTransform *)0x0) {
      pRVar3 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_rect
                         ((Rect *)&stack0xffffffd4,pRVar2,(MethodInfo *)0x0);
      fVar4 = pRVar3->m_Width;
      pTVar1 = (this->fields).MessageComponent;
      fVar5 = (this->fields).MessageMinimumSize.x;
      fVar6 = (this->fields).MessageWrapWidth;
      if (pTVar1 != (Text *)0x0) {
        pRVar2 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                           ((Graphic *)pTVar1,(MethodInfo *)0x0);
        fVar7 = UnityEngine.UI.dll::UnityEngine::UI::LayoutUtility::LayoutUtility_GetPreferredWidth
                          (pRVar2,(MethodInfo *)0x0);
        if (fVar7 <= fVar6) {
          fVar6 = fVar7;
        }
        if (fVar5 <= fVar6) {
          fVar5 = fVar6;
        }
        if (fVar4 == fVar5) {
          return 0;
        }
        pRVar2 = ChatBubble_get_rectTransform(this,(MethodInfo *)0x0);
        this_00 = ChatBubble_get_rectTransform(this,(MethodInfo *)0x0);
        if (this_00 != (RectTransform *)0x0) {
          pRVar3 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_rect
                             ((Rect *)&stack0xffffffd4,this_00,(MethodInfo *)0x0);
          if (pRVar2 != (RectTransform *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
            RectTransform_SetSizeWithCurrentAnchors
                      (pRVar2,RectTransform_Axis__Enum_Horizontal,
                       (fVar5 - 3.5591953e-29) + pRVar3->m_Width,(MethodInfo *)0x0);
            return 1;
          }
        }
      }
    }
  }
  func_?();
  pcVar8 = (code *)swi(3);
  bVar9 = (*pcVar8)();
  return bVar9;
}


/* WARNING: Instruction at (ram,0xADDR) overlaps instruction at (ram,0xADDR)
    */
/* Void PerformExtenderPosition() */

void Assembly-CSharp.dll::ChatBubble::ChatBubble_PerformExtenderPosition
               (ChatBubble *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pIVar1 = (this->fields).ExtenderComponent;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Implicit
                     ((Object_1 *)pIVar1,(MethodInfo *)0x0);
  if (bVar2 == 0) {
    return;
  }
  info = (ExtenderBorderInfo *)
         UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_main((MethodInfo *)0x0);
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                     ((Object_1 *)info,(Object_1 *)0x0,(MethodInfo *)0x0);
  pCVar3 = this;
  if (bVar2 == 0) {
code_?:
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    pEVar4 = (this->fields).ExtenderBorderInfo;
    if (pEVar4 == (ExtenderBorderInfo__Array *)0x0) goto code_?;
    info = (ExtenderBorderInfo *)(this->fields).ExtenderDock;
    bVar5 = 0;
    if (info < (ExtenderBorderInfo *)pEVar4->max_length) {
      info = pEVar4->vector[(int)info];
      pTVar6 = (Transform *)ChatBubble_get_rectTransform(this,(MethodInfo *)0x0);
      if (pTVar6 != (Transform *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                  ((Vector3 *)&stack0xffffffe4,pTVar6,(MethodInfo *)0x0);
        this_01 = (ChatBubble *)ChatBubble_get_rectTransform(this,(MethodInfo *)0x0);
        if ((this_01 != (ChatBubble *)0x0) &&
           (UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_sizeDelta
                      ((RectTransform *)this_01,(MethodInfo *)0x0), pCVar3 = this_01,
           info != (ExtenderBorderInfo *)0x0)) {
          ChatBubble_SetExtenderAnchorPosToBorder(this,info,(MethodInfo *)0x0);
          return;
        }
      }
      goto code_?;
    }
  }
  else {
    unaff_EBX = (this->fields).anchor;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                       ((Object_1 *)unaff_EBX,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar2 == 0) goto code_?;
    this_00 = (this->fields).anchor;
    if (((this_00 != (ChatAnchor *)0x0) &&
        (pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                             ((Component *)this_00,(MethodInfo *)0x0), pTVar6 != (Transform *)0x0))
       && (pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                               ((Vector3 *)&stack0xfffffff0,pTVar6,(MethodInfo *)0x0),
          info != (ExtenderBorderInfo *)0x0)) {
      uVar8 = pVVar7->y;
      method._2_2_ = (undefined2)((uint)pVVar7->z >> 0x10);
      position.z._2_2_ = method._2_2_;
      position._0_10_ = *(unkbyte10 *)pVVar7;
      pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_WorldToViewportPoint_1
                          ((Vector3 *)&stack0xffffffe4,(Camera *)info,position,(MethodInfo *)0x0);
      uVar9 = pVVar7->x;
      uVar10 = pVVar7->y;
      if (((pVVar7->z <= 0.0) || ((float)uVar9 <= 0.0)) ||
         ((_UNK_? <= (float)uVar9 ||
          (((float)uVar10 <= 0.0 || (_UNK_? <= (float)uVar10)))))) {
        ChatBubble_BindExtenderToClosestBorder(this,(Camera *)info,(MethodInfo *)0x0);
      }
      else {
        ChatBubble_BindExtenderDock(this,ExtenderBorderEnum__Enum_Bottom,(MethodInfo *)0x0);
      }
      pCVar3 = (ChatBubble *)uVar8;
      goto code_?;
    }
code_?:
    bVar5 = 0;
    func_?();
  }
  this._2_2_ = (undefined2)((uint)pCVar3 >> 0x10);
  this._0_2_ = SUB42(pCVar3,0);
  bVar11 = func_?();
  if ((POPCOUNT((uint)&stack0xfffffff1 & 0xff) & 1U) == 0) {
    pbVar12 = (byte *)((int)&(unaff_EBX->fields).previousAdjustedPosition.z + (int)info * 2);
    bVar13 = CARRY1(*pbVar12,bVar11) || CARRY1(*pbVar12 + bVar11,bVar5);
    *pbVar12 = *pbVar12 + bVar11 + bVar5;
    pbVar12 = (byte *)((int)&(unaff_EBX->fields).previousAdjustedPosition.z + (int)info * 2);
    bVar5 = *pbVar12;
    bVar14 = *pbVar12;
    *pbVar12 = bVar14 + bVar11 + bVar13;
    pcVar15 = (char *)((int)&(unaff_EBX->fields).previousAdjustedPosition.z + (int)info * 2);
    *pcVar15 = *pcVar15 + bVar11 + (CARRY1(bVar5,bVar11) || CARRY1(bVar14 + bVar11,bVar13));
    pcVar16 = (code *)swi(3);
    (*pcVar16)();
    return;
  }
  if (&stack0x00000000 == (undefined1 *)0xe) {
    func_?();
    uRam_? = 1;
  }
  pCVar3 = pCRam57560019;
  puStack_17 = (undefined *)0x0;
  pIVar1 = (pCRam57560019->fields).ExtenderComponent;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Implicit
                     ((Object_1 *)pIVar1,(MethodInfo *)0x0);
  if (bVar2 == 0) {
    return;
  }
  pIVar18 = (pCVar3->fields).ExtenderComponent;
  if ((pIVar18 == (Image *)0x0) ||
     (pRVar19 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                          ((Graphic *)pIVar18,(MethodInfo *)0x0), pRVar19 == (RectTransform *)0x0))
  goto code_?;
  this._0_2_ = 0;
  uVar20 = SUB42(pRVar19,0);
  uVar21 = (undefined2)((uint)pRVar19 >> 0x10);
  uVar22 = 0x1034;
  uVar23 = 0;
  UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_pivot
            (pRVar19,(Vector2)0x3f8000003f000000,(MethodInfo *)0x0);
  switch((pCVar3->fields).ExtenderDock) {
  case 0:
    pIVar18 = (pCVar3->fields).ExtenderComponent;
    if (pIVar18 != (Image *)0x0) {
      pIVar1 = (Image *)UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                                   ((Graphic *)pIVar18,(MethodInfo *)0x0);
      pIVar18 = (pCVar3->fields).ExtenderComponent;
      if (pIVar18 != (Image *)0x0) {
        pRVar19 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                            ((Graphic *)pIVar18,(MethodInfo *)0x0);
        uVar22 = 0;
        uVar20 = 0x3f00;
        if ((pRVar19 != (RectTransform *)0x0) &&
           (value.y._0_2_ = uVar21, value.x = 0.5, value.y._2_2_ = uVar23,
           UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_anchorMax
                     (pRVar19,value,(MethodInfo *)0x0), pIVar1 != (Image *)0x0)) {
          value_01.y._2_2_ = uVar23;
          value_01.y._0_2_ = uVar21;
          value_01.x._2_2_ = uVar20;
          value_01.x._0_2_ = uVar22;
          UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_anchorMin
                    ((RectTransform *)pIVar1,value_01,(MethodInfo *)0x0);
          pIVar18 = (pCVar3->fields).ExtenderComponent;
          if (pIVar18 != (Image *)0x0) {
            pIVar1 = (Image *)UnityEngine.UI.dll::UnityEngine::UI::Graphic::
                               Graphic_get_rectTransform((Graphic *)pIVar18,(MethodInfo *)0x0);
            uVar22 = 0;
            uVar20 = 0;
code_?:
            euler_00.z._2_2_ = uVar20;
            euler_00.z._0_2_ = uVar22;
            euler_00.y = (float)puStack_17;
            euler_00.x = (float)puStack_17;
            pQVar24 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::
                      Quaternion_Internal_FromEulerRad
                                ((Quaternion *)&puStack_17,euler_00,(MethodInfo *)0x0);
            if (pIVar1 != (Image *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
                        ((Transform *)pIVar1,*pQVar24,(MethodInfo *)0x0);
              goto code_?;
            }
          }
        }
      }
    }
    break;
  case 1:
    pIVar18 = (pCVar3->fields).ExtenderComponent;
    if (pIVar18 != (Image *)0x0) {
      pIVar1 = (Image *)UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                                   ((Graphic *)pIVar18,(MethodInfo *)0x0);
      pIVar18 = (pCVar3->fields).ExtenderComponent;
      if (pIVar18 != (Image *)0x0) {
        pRVar19 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                            ((Graphic *)pIVar18,(MethodInfo *)0x0);
        uVar21 = 0;
        uVar23 = 0x3f00;
        if ((pRVar19 != (RectTransform *)0x0) &&
           (value_00.x._2_2_ = uVar20, value_00.x._0_2_ = uVar22, value_00.y._0_2_ = 0,
           value_00.y._2_2_ = 0x3f00,
           UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_anchorMax
                     (pRVar19,value_00,(MethodInfo *)0x0), pIVar1 != (Image *)0x0)) {
          value_02.y._2_2_ = uVar23;
          value_02.y._0_2_ = uVar21;
          value_02.x._2_2_ = uVar20;
          value_02.x._0_2_ = uVar22;
          UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_anchorMin
                    ((RectTransform *)pIVar1,value_02,(MethodInfo *)0x0);
          pIVar18 = (pCVar3->fields).ExtenderComponent;
          if (pIVar18 != (Image *)0x0) {
            pIVar1 = (Image *)UnityEngine.UI.dll::UnityEngine::UI::Graphic::
                               Graphic_get_rectTransform((Graphic *)pIVar18,(MethodInfo *)0x0);
            uVar22 = 0xbfc9;
code_?:
            euler.z._2_2_ = uVar22;
            euler.z._0_2_ = 0xfdb;
            euler.y = (float)puStack_17;
            euler.x = (float)puStack_17;
            pQVar24 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::
                      Quaternion_Internal_FromEulerRad
                                ((Quaternion *)&puStack_17,euler,(MethodInfo *)0x0);
            if (pIVar1 != (Image *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localRotation
                        ((Transform *)pIVar1,*pQVar24,(MethodInfo *)0x0);
              goto code_?;
            }
          }
        }
      }
    }
    break;
  case 2:
    pIVar18 = (pCVar3->fields).ExtenderComponent;
    if (pIVar18 != (Image *)0x0) {
      pIVar1 = (Image *)UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                                   ((Graphic *)pIVar18,(MethodInfo *)0x0);
      pIVar18 = (pCVar3->fields).ExtenderComponent;
      if (pIVar18 != (Image *)0x0) {
        pRVar19 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                            ((Graphic *)pIVar18,(MethodInfo *)0x0);
        uVar22 = 0;
        uVar20 = 0x3f80;
        uVar21 = 0;
        uVar23 = 0x3f00;
        if ((pRVar19 != (RectTransform *)0x0) &&
           (UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_anchorMax
                      (pRVar19,(Vector2)0x3f0000003f800000,(MethodInfo *)0x0),
           pIVar1 != (Image *)0x0)) {
          value_03.y._2_2_ = uVar23;
          value_03.y._0_2_ = uVar21;
          value_03.x._2_2_ = uVar20;
          value_03.x._0_2_ = uVar22;
          UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_anchorMin
                    ((RectTransform *)pIVar1,value_03,(MethodInfo *)0x0);
          pIVar18 = (pCVar3->fields).ExtenderComponent;
          if (pIVar18 != (Image *)0x0) {
            pIVar1 = (Image *)UnityEngine.UI.dll::UnityEngine::UI::Graphic::
                               Graphic_get_rectTransform((Graphic *)pIVar18,(MethodInfo *)0x0);
            uVar22 = 0x3fc9;
            goto code_?;
          }
        }
      }
    }
    break;
  case 3:
    pIVar18 = (pCVar3->fields).ExtenderComponent;
    if (pIVar18 != (Image *)0x0) {
      pIVar1 = (Image *)UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                                   ((Graphic *)pIVar18,(MethodInfo *)0x0);
      pIVar18 = (pCVar3->fields).ExtenderComponent;
      if (pIVar18 != (Image *)0x0) {
        pRVar19 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                            ((Graphic *)pIVar18,(MethodInfo *)0x0);
        uVar22 = 0;
        uVar20 = 0x3f00;
        uVar21 = 0;
        uVar23 = 0x3f80;
        if ((pRVar19 != (RectTransform *)0x0) &&
           (UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_anchorMax
                      (pRVar19,(Vector2)0x3f8000003f000000,(MethodInfo *)0x0),
           pIVar1 != (Image *)0x0)) {
          value_04.y._2_2_ = uVar23;
          value_04.y._0_2_ = uVar21;
          value_04.x._2_2_ = uVar20;
          value_04.x._0_2_ = uVar22;
          UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_anchorMin
                    ((RectTransform *)pIVar1,value_04,(MethodInfo *)0x0);
          pIVar18 = (pCVar3->fields).ExtenderComponent;
          if (pIVar18 != (Image *)0x0) {
            pIVar1 = (Image *)UnityEngine.UI.dll::UnityEngine::UI::Graphic::
                               Graphic_get_rectTransform((Graphic *)pIVar18,(MethodInfo *)0x0);
            uVar22 = 0xfdb;
            uVar20 = 0x4049;
            goto code_?;
          }
        }
      }
    }
    break;
  default:
code_?:
    pIVar18 = (pCVar3->fields).ExtenderComponent;
    if (pIVar18 == (Image *)0x0) break;
    bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_get_enabled
                       ((Behaviour *)pIVar18,(MethodInfo *)0x0);
    if (bVar2 == 0) {
code_?:
      pIVar18 = (pCVar3->fields).ExtenderComponent;
      if (pIVar18 != (Image *)0x0) {
        bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_get_enabled
                           ((Behaviour *)pIVar18,(MethodInfo *)0x0);
        if (bVar2 != 0) {
          return;
        }
        pEVar4 = (pCVar3->fields).ExtenderBorderInfo;
        if (pEVar4 != (ExtenderBorderInfo__Array *)0x0) {
          uVar25 = (pCVar3->fields).ExtenderDock;
          bVar5 = uVar25 < pEVar4->max_length;
          if (!(bool)bVar5) goto code_?;
          if (pEVar4->vector[uVar25] != (ExtenderBorderInfo *)0x0) {
            if ((pEVar4->vector[uVar25]->fields).Enabled == 0) {
              return;
            }
            pIVar18 = (pCVar3->fields).ExtenderComponent;
            if (pIVar18 != (Image *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                        ((Behaviour *)pIVar18,1,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
      break;
    }
    pEVar4 = (pCVar3->fields).ExtenderBorderInfo;
    if (pEVar4 == (ExtenderBorderInfo__Array *)0x0) break;
    uVar25 = (pCVar3->fields).ExtenderDock;
    bVar5 = 0;
    if (uVar25 < pEVar4->max_length) {
      if (pEVar4->vector[uVar25] != (ExtenderBorderInfo *)0x0) {
        if ((pEVar4->vector[uVar25]->fields).Enabled != 0) goto code_?;
        pIVar18 = (pCVar3->fields).ExtenderComponent;
        if (pIVar18 != (Image *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                    ((Behaviour *)pIVar18,0,(MethodInfo *)0x0);
          return;
        }
      }
      break;
    }
    goto code_?;
  }
code_?:
  bVar5 = 0;
  func_?();
code_?:
  lVar26 = func_?();
  iVar27 = (int)((ulonglong)lVar26 >> 0x20);
  uVar25 = iVar27 - 1;
  if (lVar26 < 0x100000000) {
    pCVar3 = (ChatBubble *)CONCAT22(this._2_2_,this._0_2_);
    pOVar28 = TypeInfo__UnityEngine__Object;
code_?:
    bVar29 = (pOVar28->_1).cctor_finished_or_no_cctor == 0;
  }
  else {
    bVar14 = (byte)lVar26;
    bVar30 = (byte)uVar25;
    bVar11 = bVar14 + bVar30;
    bVar13 = CARRY1(bVar14,bVar30) || CARRY1(bVar11,bVar5);
    uVar31 = (undefined3)((ulonglong)lVar26 >> 8);
    cVar32 = bVar11 + bVar5;
    if ((SCARRY1(bVar14,bVar30) != SCARRY1(bVar11,bVar5)) != cVar32 < '\0') {
      puVar33 = (uint *)((int)&pCVar3[-2].fields.ExtenderComponent + 3);
      bVar34 = CARRY4(*puVar33,uVar25) || CARRY4(*puVar33 + uVar25,(uint)bVar13);
      *puVar33 = *puVar33 + uVar25 + (uint)bVar13;
      pOVar28 = (Object_1__Class *)CONCAT31(uVar31,cVar32);
      if (*puVar33 != 0) {
        pCVar3 = (ChatBubble *)((int)&pCVar3->klass + 1);
        cVar35 = (cVar32 + 'u') - bVar34;
        bVar29 = cVar35 == '\0';
        if (bVar29 || (SBORROW1(cVar32,-0x75) != SBORROW1(cVar32 + 'u',bVar34)) != cVar35 < '\0') {
          puVar33 = (uint *)(CONCAT31(uVar31,cVar35) + -0x18);
          *puVar33 = *puVar33 | uVar25;
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        goto code_?;
      }
      goto code_?;
    }
    pcVar15 = (char *)(iVar27 + 0x2710347c);
    cVar32 = *pcVar15;
    cVar35 = *pcVar15;
    *pcVar15 = cVar35 + '\x11' + bVar13;
    bVar29 = *pcVar15 == '\0';
    if (!bVar29 && (SCARRY1(cVar32,'\x11') != SCARRY1(cVar35 + '\x11',bVar13)) == *pcVar15 < '\0') {
      pcVar16 = (code *)swi(3);
      (*pcVar16)();
      return;
    }
  }
  pIVar1 = (Image *)(pCVar3->fields).MessageComponent;
code_?:
  if (bVar29) {
    func_?();
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Implicit
                     ((Object_1 *)pIVar1,(MethodInfo *)0x0);
  if (bVar2 == 0) {
    return;
  }
  pTVar36 = (pCVar3->fields).MessageComponent;
  if (pTVar36 != (Text *)0x0) {
    pTVar37 = pTVar36->klass;
    pIStack38 = (pTVar37->vtable).set_text.methodPtr;
    (*(code *)(pTVar37->vtable).get_text.method)();
    pTVar36 = (pCVar3->fields).MessageComponent;
    if (pTVar36 != (Text *)0x0) {
      pTVar37 = pTVar36->klass;
      pIStack38 = (pTVar37->vtable).CalculateLayoutInputHorizontal_1.methodPtr;
      (*(code *)(pTVar37->vtable).set_text.method)();
      ChatBubble_PerformAutoSize(pCVar3,(MethodInfo *)0x0);
      pTVar36 = (pCVar3->fields).MessageComponent;
      if ((pTVar36 != (Text *)0x0) &&
         (pRVar19 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                              ((Graphic *)pTVar36,(MethodInfo *)0x0), pRVar19 != (RectTransform *)0x0
         )) {
        pRVar39 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_rect
                            ((Rect *)&stack0xffffffe4,pRVar19,(MethodInfo *)0x0);
        fVar40 = pRVar39->m_Height;
        pTVar36 = (pCVar3->fields).MessageComponent;
        (pCVar3->fields).MessageMinimumSize.x = pRVar39->m_Width;
        (pCVar3->fields).MessageMinimumSize.y = fVar40;
        if (pTVar36 != (Text *)0x0) {
          pTVar37 = pTVar36->klass;
          pIStack38 = (pTVar37->vtable).CalculateLayoutInputHorizontal_1.methodPtr;
          (*(code *)(pTVar37->vtable).set_text.method)();
          return;
        }
      }
    }
  }
  func_?();
  pcVar16 = (code *)swi(3);
  (*pcVar16)();
  return;
}


/* WARNING: Instruction at (ram,0xADDR) overlaps instruction at (ram,0xADDR)
    */
/* Void PerformExtenderSnap() */

void Assembly-CSharp.dll::ChatBubble::ChatBubble_PerformExtenderSnap
               (ChatBubble *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  fStack_1 = 0.0;
  puStack_2 = (undefined *)0x0;
  fVar3 = 0.0;
  this_00 = (this->fields).ExtenderComponent;
  fVar4 = 0.0;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar5 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Implicit
                    ((Object_1 *)this_00,(MethodInfo *)0x0);
  if (bVar5 == 0) {
    return;
  }
  pIVar6 = (this->fields).ExtenderComponent;
  if ((pIVar6 == (Image *)0x0) ||
     (pRVar7 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                          ((Graphic *)pIVar6,(MethodInfo *)0x0), pRVar7 == (RectTransform *)0x0))
  goto code_?;
  UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_pivot
            (pRVar7,(Vector2)0x3f8000003f000000,(MethodInfo *)0x0);
  switch((this->fields).ExtenderDock) {
  case 0:
    pIVar6 = (this->fields).ExtenderComponent;
    if (pIVar6 != (Image *)0x0) {
      this_00 = (Image *)UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                                   ((Graphic *)pIVar6,(MethodInfo *)0x0);
      pIVar6 = (this->fields).ExtenderComponent;
      if (((pIVar6 != (Image *)0x0) &&
          (pRVar7 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                               ((Graphic *)pIVar6,(MethodInfo *)0x0),
          pRVar7 != (RectTransform *)0x0)) &&
         (value.y = fVar4, value.x = 0.5,
         UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_anchorMax
                   (pRVar7,value,(MethodInfo *)0x0), this_00 != (Image *)0x0)) {
        UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_anchorMin
                  ((RectTransform *)this_00,(Vector2)0x0,(MethodInfo *)0x0);
        pIVar6 = (this->fields).ExtenderComponent;
        if (pIVar6 != (Image *)0x0) {
          this_00 = (Image *)UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                                       ((Graphic *)pIVar6,(MethodInfo *)0x0);
          fVar3 = 0.0;
code_?:
          uVar8 = CONCAT44(fStack_1,fStack_1);
          euler_00.z = fVar3;
          euler_00.x = fStack_1;
          euler_00.y = fStack_1;
          pQVar9 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::
                    Quaternion_Internal_FromEulerRad
                              ((Quaternion *)&fStack_1,euler_00,(MethodInfo *)0x0);
          in_stack_10 = (ChatBubble *)uVar8;
          if (this_00 != (Image *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
                      ((Transform *)this_00,*pQVar9,(MethodInfo *)0x0);
            goto code_?;
          }
        }
      }
    }
    break;
  case 1:
    pIVar6 = (this->fields).ExtenderComponent;
    if (pIVar6 != (Image *)0x0) {
      this_00 = (Image *)UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                                   ((Graphic *)pIVar6,(MethodInfo *)0x0);
      pIVar6 = (this->fields).ExtenderComponent;
      if (((pIVar6 != (Image *)0x0) &&
          (pRVar7 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                               ((Graphic *)pIVar6,(MethodInfo *)0x0),
          pRVar7 != (RectTransform *)0x0)) &&
         (value_00.y = 0.5, value_00.x = fVar3,
         UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_anchorMax
                   (pRVar7,value_00,(MethodInfo *)0x0), this_00 != (Image *)0x0)) {
        UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_anchorMin
                  ((RectTransform *)this_00,(Vector2)0x0,(MethodInfo *)0x0);
        pIVar6 = (this->fields).ExtenderComponent;
        if (pIVar6 != (Image *)0x0) {
          this_00 = (Image *)UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                                       ((Graphic *)pIVar6,(MethodInfo *)0x0);
          fVar3 = -1.5707964;
code_?:
          uVar8 = CONCAT44(fStack_1,fStack_1);
          euler.z = fVar3;
          euler.x = fStack_1;
          euler.y = fStack_1;
          pQVar9 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::
                    Quaternion_Internal_FromEulerRad
                              ((Quaternion *)&fStack_1,euler,(MethodInfo *)0x0);
          in_stack_10 = (ChatBubble *)uVar8;
          if (this_00 != (Image *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localRotation
                      ((Transform *)this_00,*pQVar9,(MethodInfo *)0x0);
            goto code_?;
          }
        }
      }
    }
    break;
  case 2:
    pIVar6 = (this->fields).ExtenderComponent;
    if (pIVar6 != (Image *)0x0) {
      this_00 = (Image *)UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                                   ((Graphic *)pIVar6,(MethodInfo *)0x0);
      pIVar6 = (this->fields).ExtenderComponent;
      if (((pIVar6 != (Image *)0x0) &&
          (pRVar7 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                               ((Graphic *)pIVar6,(MethodInfo *)0x0),
          pRVar7 != (RectTransform *)0x0)) &&
         (UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_anchorMax
                    (pRVar7,(Vector2)0x3f0000003f800000,(MethodInfo *)0x0), this_00 != (Image *)0x0
         )) {
        UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_anchorMin
                  ((RectTransform *)this_00,(Vector2)0x0,(MethodInfo *)0x0);
        pIVar6 = (this->fields).ExtenderComponent;
        if (pIVar6 != (Image *)0x0) {
          this_00 = (Image *)UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                                       ((Graphic *)pIVar6,(MethodInfo *)0x0);
          fVar3 = 1.5707964;
          goto code_?;
        }
      }
    }
    break;
  case 3:
    pIVar6 = (this->fields).ExtenderComponent;
    if (pIVar6 != (Image *)0x0) {
      this_00 = (Image *)UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                                   ((Graphic *)pIVar6,(MethodInfo *)0x0);
      pIVar6 = (this->fields).ExtenderComponent;
      if (((pIVar6 != (Image *)0x0) &&
          (pRVar7 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                               ((Graphic *)pIVar6,(MethodInfo *)0x0),
          pRVar7 != (RectTransform *)0x0)) &&
         (UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_anchorMax
                    (pRVar7,(Vector2)0x3f8000003f000000,(MethodInfo *)0x0), this_00 != (Image *)0x0
         )) {
        UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_anchorMin
                  ((RectTransform *)this_00,(Vector2)0x0,(MethodInfo *)0x0);
        pIVar6 = (this->fields).ExtenderComponent;
        if (pIVar6 != (Image *)0x0) {
          this_00 = (Image *)UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                                       ((Graphic *)pIVar6,(MethodInfo *)0x0);
          fVar3 = 3.1415927;
          goto code_?;
        }
      }
    }
    break;
  default:
code_?:
    pIVar6 = (this->fields).ExtenderComponent;
    if (pIVar6 == (Image *)0x0) break;
    bVar5 = UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_get_enabled
                      ((Behaviour *)pIVar6,(MethodInfo *)0x0);
    if (bVar5 == 0) {
code_?:
      pIVar6 = (this->fields).ExtenderComponent;
      if (pIVar6 != (Image *)0x0) {
        bVar5 = UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_get_enabled
                          ((Behaviour *)pIVar6,(MethodInfo *)0x0);
        if (bVar5 != 0) {
          return;
        }
        pEVar11 = (this->fields).ExtenderBorderInfo;
        if (pEVar11 != (ExtenderBorderInfo__Array *)0x0) {
          uVar12 = (this->fields).ExtenderDock;
          bVar13 = uVar12 < pEVar11->max_length;
          if (!(bool)bVar13) goto code_?;
          if (pEVar11->vector[uVar12] != (ExtenderBorderInfo *)0x0) {
            if ((pEVar11->vector[uVar12]->fields).Enabled == 0) {
              return;
            }
            pIVar6 = (this->fields).ExtenderComponent;
            if (pIVar6 != (Image *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                        ((Behaviour *)pIVar6,1,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
      break;
    }
    pEVar11 = (this->fields).ExtenderBorderInfo;
    if (pEVar11 == (ExtenderBorderInfo__Array *)0x0) break;
    uVar12 = (this->fields).ExtenderDock;
    bVar13 = 0;
    if (uVar12 < pEVar11->max_length) {
      if (pEVar11->vector[uVar12] != (ExtenderBorderInfo *)0x0) {
        if ((pEVar11->vector[uVar12]->fields).Enabled != 0) goto code_?;
        pIVar6 = (this->fields).ExtenderComponent;
        if (pIVar6 != (Image *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                    ((Behaviour *)pIVar6,0,(MethodInfo *)0x0);
          return;
        }
      }
      break;
    }
    goto code_?;
  }
code_?:
  bVar13 = 0;
  func_?();
code_?:
  lVar14 = func_?();
  iVar15 = (int)((ulonglong)lVar14 >> 0x20);
  uVar12 = iVar15 - 1;
  pOVar16 = TypeInfo__UnityEngine__Object;
  if (lVar14 < 0x100000000) {
code_?:
    bVar17 = (pOVar16->_1).cctor_finished_or_no_cctor == 0;
    this = in_stack_10;
  }
  else {
    bVar18 = (byte)lVar14;
    bVar19 = (byte)uVar12;
    bVar20 = bVar18 + bVar19;
    bVar21 = CARRY1(bVar18,bVar19) || CARRY1(bVar20,bVar13);
    uVar22 = (undefined3)((ulonglong)lVar14 >> 8);
    cVar23 = bVar20 + bVar13;
    if ((SCARRY1(bVar18,bVar19) != SCARRY1(bVar20,bVar13)) != cVar23 < '\0') {
      puVar24 = (uint *)((int)&this[-2].fields.ExtenderComponent + 3);
      bVar25 = CARRY4(*puVar24,uVar12) || CARRY4(*puVar24 + uVar12,(uint)bVar21);
      *puVar24 = *puVar24 + uVar12 + (uint)bVar21;
      pOVar16 = (Object_1__Class *)CONCAT31(uVar22,cVar23);
      in_stack_10 = this;
      if (*puVar24 != 0) {
        this = (ChatBubble *)((int)&this->klass + 1);
        cVar26 = (cVar23 + 'u') - bVar25;
        bVar17 = cVar26 == '\0';
        if (bVar17 || (SBORROW1(cVar23,-0x75) != SBORROW1(cVar23 + 'u',bVar25)) != cVar26 < '\0') {
          puVar24 = (uint *)(CONCAT31(uVar22,cVar26) + -0x18);
          *puVar24 = *puVar24 | uVar12;
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        goto code_?;
      }
      goto code_?;
    }
    pcVar27 = (char *)(iVar15 + 0x2710347c);
    cVar23 = *pcVar27;
    cVar26 = *pcVar27 + (char)&stack0xfffffffc;
    *pcVar27 = cVar26 + bVar21;
    bVar17 = *pcVar27 == '\0';
    if (!bVar17 &&
        (SCARRY1(cVar23,(char)&stack0xfffffffc) != SCARRY1(cVar26,bVar21)) == *pcVar27 < '\0') {
      pcVar28 = (code *)swi(3);
      (*pcVar28)();
      return;
    }
  }
  this_00 = (Image *)(this->fields).MessageComponent;
code_?:
  if (bVar17) {
    func_?();
  }
  bVar5 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Implicit
                    ((Object_1 *)this_00,(MethodInfo *)0x0);
  if (bVar5 != 0) {
    pTVar29 = (this->fields).MessageComponent;
    if (pTVar29 != (Text *)0x0) {
      pTVar30 = pTVar29->klass;
      pIStack31 = (pTVar30->vtable).set_text.methodPtr;
      (*(code *)(pTVar30->vtable).get_text.method)();
      pTVar29 = (this->fields).MessageComponent;
      if (pTVar29 != (Text *)0x0) {
        pTVar30 = pTVar29->klass;
        pIStack31 = (pTVar30->vtable).CalculateLayoutInputHorizontal_1.methodPtr;
        (*(code *)(pTVar30->vtable).set_text.method)();
        ChatBubble_PerformAutoSize(this,(MethodInfo *)0x0);
        pTVar29 = (this->fields).MessageComponent;
        if ((pTVar29 != (Text *)0x0) &&
           (pRVar7 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                                ((Graphic *)pTVar29,(MethodInfo *)0x0),
           pRVar7 != (RectTransform *)0x0)) {
          pRVar32 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_rect
                              ((Rect *)&stack0xffffffd8,pRVar7,(MethodInfo *)0x0);
          fVar3 = pRVar32->m_Height;
          pTVar29 = (this->fields).MessageComponent;
          (this->fields).MessageMinimumSize.x = pRVar32->m_Width;
          (this->fields).MessageMinimumSize.y = fVar3;
          if (pTVar29 != (Text *)0x0) {
            pTVar30 = pTVar29->klass;
            pIStack31 = (pTVar30->vtable).CalculateLayoutInputHorizontal_1.methodPtr;
            (*(code *)(pTVar30->vtable).set_text.method)();
            return;
          }
        }
      }
    }
    func_?();
    pcVar28 = (code *)swi(3);
    (*pcVar28)();
    return;
  }
  return;
}


/* Vector2 PerformManualSize(String) */

Vector2 Assembly-CSharp.dll::ChatBubble::ChatBubble_PerformManualSize
                  (ChatBubble *this,String *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  fStack_1 = (this->fields).MessageMinimumSize.x;
  pTVar2 = (this->fields).MessageComponent;
  fStack_3 = (this->fields).MessageMinimumSize.y;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar4 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Implicit
                    ((Object_1 *)pTVar2,(MethodInfo *)0x0);
  if (bVar4 != 0) {
    pTVar2 = (this->fields).MessageComponent;
    if (pTVar2 != (Text *)0x0) {
      uVar5 = (*(code *)(pTVar2->klass->vtable).get_text.method)
                        (pTVar2,(pTVar2->klass->vtable).set_text.methodPtr);
      pTVar2 = (this->fields).MessageComponent;
      if (pTVar2 != (Text *)0x0) {
        (*(code *)(pTVar2->klass->vtable).set_text.method)
                  (pTVar2,value,(pTVar2->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
        ChatBubble_PerformAutoSize(this,(MethodInfo *)0x0);
        pTVar2 = (this->fields).MessageComponent;
        if (pTVar2 != (Text *)0x0) {
          this_00 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                              ((Graphic *)pTVar2,(MethodInfo *)0x0);
          if (this_00 != (RectTransform *)0x0) {
            pRVar6 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_rect
                               (&RStack_7,this_00,(MethodInfo *)0x0);
            fVar8 = pRVar6->m_Height;
            pTVar2 = (this->fields).MessageComponent;
            (this->fields).MessageMinimumSize.x = pRVar6->m_Width;
            (this->fields).MessageMinimumSize.y = fVar8;
            if (pTVar2 != (Text *)0x0) {
              (*(code *)(pTVar2->klass->vtable).set_text.method)
                        (pTVar2,uVar5,
                         (pTVar2->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
              goto code_?;
            }
          }
        }
      }
    }
    func_?();
    pcVar9 = (code *)swi(3);
    VVar10 = (Vector2)(*pcVar9)();
    return VVar10;
  }
code_?:
  VVar10.y = fStack_3;
  VVar10.x = fStack_1;
  return VVar10;
}


/* Void SetChatBubbleVisibility(Boolean) */

void Assembly-CSharp.dll::ChatBubble::ChatBubble_SetChatBubbleVisibility
               (ChatBubble *this,bool shouldBeVisible,MethodInfo *method)

{
  this_00 = (this->fields).CanvasGroup;
  if (shouldBeVisible == 0) {
    (this->fields).currentFade = 0.0;
    (this->fields).timeUntilFade = 0.0;
    if (this_00 != (CanvasGroup *)0x0) {
      UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                (this_00,0.0,(MethodInfo *)0x0);
      return;
    }
  }
  else {
    (this->fields).currentFade = 1.0;
    if (this_00 != (CanvasGroup *)0x0) {
      UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                (this_00,1.0,(MethodInfo *)0x0);
      fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
      pSVar2 = (this->fields).MessageValue;
      if (pSVar2 != (String *)0x0) {
        fVar1 = (float)(pSVar2->fields)._stringLength / _UNK_? + fVar1 + _UNK_?;
        pfVar3 = &(this->fields).timeUntilFade;
        if (fVar1 < *pfVar3 || fVar1 == *pfVar3) {
          return;
        }
        (this->fields).timeUntilFade = fVar1;
        return;
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void SetExtenderAnchorPosToBorder(ExtenderBorderInfo) */

void Assembly-CSharp.dll::ChatBubble::ChatBubble_SetExtenderAnchorPosToBorder
               (ChatBubble *this,ExtenderBorderInfo *info,MethodInfo *method)

{
  switch((this->fields).ExtenderDock) {
  case 0:
    pIVar1 = (this->fields).ExtenderComponent;
    if (pIVar1 == (Image *)0x0) goto code_?;
    in_stack_2 = (MethodInfo *)0x0;
    this_00 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                        ((Graphic *)pIVar1,(MethodInfo *)0x0);
    pIVar1 = (this->fields).ExtenderComponent;
    if (pIVar1 == (Image *)0x0) goto code_?;
    in_stack_2 = (MethodInfo *)&UNK_?;
    pRVar3 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                       ((Graphic *)pIVar1,(MethodInfo *)0x0);
    if (pRVar3 == (RectTransform *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_anchoredPosition
              (pRVar3,(MethodInfo *)0x0);
    break;
  case 1:
    pIVar1 = (this->fields).ExtenderComponent;
    if (pIVar1 == (Image *)0x0) goto code_?;
    in_stack_2 = (MethodInfo *)0x0;
    this_00 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                        ((Graphic *)pIVar1,(MethodInfo *)0x0);
    if (info == (ExtenderBorderInfo *)0x0) goto code_?;
    pIVar1 = (this->fields).ExtenderComponent;
    if (pIVar1 == (Image *)0x0) goto code_?;
    in_stack_2 = (MethodInfo *)&UNK_?;
    pRVar3 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                       ((Graphic *)pIVar1,(MethodInfo *)0x0);
    if (pRVar3 == (RectTransform *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_anchoredPosition
              (pRVar3,(MethodInfo *)0x0);
    goto code_?;
  case 2:
    pIVar1 = (this->fields).ExtenderComponent;
    if (pIVar1 == (Image *)0x0) goto code_?;
    in_stack_2 = (MethodInfo *)0x0;
    this_00 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                        ((Graphic *)pIVar1,(MethodInfo *)0x0);
    if (info == (ExtenderBorderInfo *)0x0) goto code_?;
    pIVar1 = (this->fields).ExtenderComponent;
    if (pIVar1 == (Image *)0x0) goto code_?;
    in_stack_2 = (MethodInfo *)&UNK_?;
    pRVar3 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                       ((Graphic *)pIVar1,(MethodInfo *)0x0);
    if (pRVar3 == (RectTransform *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_anchoredPosition
              (pRVar3,(MethodInfo *)0x0);
    goto code_?;
  case 3:
    pIVar1 = (this->fields).ExtenderComponent;
    if (pIVar1 == (Image *)0x0) goto code_?;
    in_stack_2 = (MethodInfo *)0x0;
    goto code_?;
  default:
    return;
  }
  do {
    if (info != (ExtenderBorderInfo *)0x0) {
code_?:
      if (this_00 != (RectTransform *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_anchoredPosition
                  (this_00,(Vector2)0x0,(MethodInfo *)0x0);
        return;
      }
    }
code_?:
    do {
      do {
        uVar4 = func_?();
        pIVar1 = (Image *)uVar4;
        puVar5 = (uint *)((int)&pIVar1->klass + (int)((ulonglong)uVar4 >> 0x20));
        *puVar5 = *puVar5 ^ 0xADDR;
code_?:
        this_00 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                            ((Graphic *)pIVar1,in_stack_2);
        pIVar1 = (this->fields).ExtenderComponent;
      } while (pIVar1 == (Image *)0x0);
      in_stack_2 = (MethodInfo *)&UNK_?;
      pRVar3 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                         ((Graphic *)pIVar1,(MethodInfo *)0x0);
    } while (pRVar3 == (RectTransform *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_anchoredPosition
              (pRVar3,(MethodInfo *)0x0);
  } while( true );
}


/* Void Update() */

void Assembly-CSharp.dll::ChatBubble::ChatBubble_Update(ChatBubble *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  ChatBubble_PerformExtenderPosition(this,(MethodInfo *)0x0);
  pCVar1 = (this->fields).anchor;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)pCVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    pCVar1 = (this->fields).anchor;
    if (pCVar1 == (ChatAnchor *)0x0) goto code_?;
    ChatAnchor::ChatAnchor_UpdateAttachedBubblePosition(pCVar1,(MethodInfo *)0x0);
  }
  fVar3 = (this->fields).timeUntilFade;
  fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  if (fVar4 <= fVar3) {
    ChatBubble_UpdateDistanceFading(this,(MethodInfo *)0x0);
    return;
  }
  fVar3 = (this->fields).currentFade;
  fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
  fVar3 = fVar3 - fVar4;
  pCVar5 = (this->fields).CanvasGroup;
  (this->fields).currentFade = fVar3;
  if (pCVar5 != (CanvasGroup *)0x0) {
    fVar4 = UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_get_alpha
                      (pCVar5,(MethodInfo *)0x0);
    if (fVar4 <= fVar3) {
      return;
    }
    pCVar5 = (this->fields).CanvasGroup;
    if (pCVar5 != (CanvasGroup *)0x0) {
      UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                (pCVar5,(this->fields).currentFade,(MethodInfo *)0x0);
      return;
    }
  }
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void UpdateDistanceFading() */

void Assembly-CSharp.dll::ChatBubble::ChatBubble_UpdateDistanceFading
               (ChatBubble *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&
                    MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<UnityEngine::Vector3>__op_Implicit_MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<UnityEngine::Vector3>_
                   );
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVGameControllerBase);
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (((pMVar1 != (MVGameControllerBase *)0x0) &&
      (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
     (pMVar3 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar2,(MethodInfo *)0x0),
     pMVar3 != (MVLocalPlayer *)0x0)) {
    bVar4 = MVPlayer::MVPlayer_get_IsReady((MVPlayer *)pMVar3,(MethodInfo *)0x0);
    if (bVar4 != 0) {
      pCVar5 = (this->fields).anchor;
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      bVar4 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                        ((Object_1 *)pCVar5,(Object_1 *)0x0,(MethodInfo *)0x0);
      if (bVar4 == 0) {
        pCVar5 = (this->fields).anchor;
        if (pCVar5 != (ChatAnchor *)0x0) {
          stack0xffffffe4 = (float)pCVar5;
          this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                              ((Component *)pCVar5,(MethodInfo *)0x0);
          if (this_01 != (Transform *)0x0) {
            stack0xffffffe4 = (float)&UNK_?;
            pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                ((Vector3 *)&puStack_7,this_01,(MethodInfo *)0x0);
            uVar8._0_4_ = pVVar6->x;
            uVar8._4_4_ = pVVar6->y;
            if (cRam_? == '\0') {
              func_?();
              cRam_? = '\x01';
            }
            pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
            if (((pMVar1 != (MVGameControllerBase *)0x0) &&
                (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
               ((pMVar3 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar2,(MethodInfo *)0x0),
                pMVar3 != (MVLocalPlayer *)0x0 &&
                (pSVar9 = (pMVar3->fields).spawnRoleDataMediator,
                pSVar9 != (SpawnRoleDataMediator *)0x0)))) {
              pVVar6 = Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
                        SpawnRoleVariableTypes::SpawnRoleVariable`1[UnityEngine::Vector3]::
                        SpawnRoleVariable_1_UnityEngine_Vector3__op_Implicit
                                  ((Vector3 *)&stack0xffffffd4,
                                   (SpawnRoleVariable_1_UnityEngine_Vector3_ *)
                                   (pSVar9->fields).position,
                                   MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<UnityEngine::Vector3>__op_Implicit_MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<UnityEngine::Vector3>_
                                  );
              uVar10 = pVVar6->x;
              uVar11 = pVVar6->y;
              unique0x100000cc = (float)((ulonglong)uVar8 >> 0x20) - (float)uVar11;
              puStack_7 = (undefined *)((float)uVar8 - (float)uVar10);
              fVar12 = (float10)func_?();
              if ((float)fVar12 <= _UNK_?) {
                return;
              }
              this_00 = (this->fields).CanvasGroup;
              if (this_00 != (CanvasGroup *)0x0) {
                UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                          (this_00,(_UNK_? - (float)fVar12) / _UNK_?,(MethodInfo *)0x0
                          );
                return;
              }
            }
          }
        }
        goto code_?;
      }
    }
    return;
  }
code_?:
  func_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Void UpdateFading() */

void Assembly-CSharp.dll::ChatBubble::ChatBubble_UpdateFading(ChatBubble *this,MethodInfo *method)

{
  fVar1 = (this->fields).timeUntilFade;
  fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  if (fVar2 <= fVar1) {
    ChatBubble_UpdateDistanceFading(this,(MethodInfo *)0x0);
    return;
  }
  fVar1 = (this->fields).currentFade;
  fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
  fVar1 = fVar1 - fVar2;
  pCVar3 = (this->fields).CanvasGroup;
  (this->fields).currentFade = fVar1;
  if (pCVar3 != (CanvasGroup *)0x0) {
    fVar2 = UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_get_alpha
                      (pCVar3,(MethodInfo *)0x0);
    if (fVar2 <= fVar1) {
      return;
    }
    pCVar3 = (this->fields).CanvasGroup;
    if (pCVar3 != (CanvasGroup *)0x0) {
      UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                (pCVar3,(this->fields).currentFade,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* ChatBubble() */

void Assembly-CSharp.dll::ChatBubble::ChatBubble__ctor(ChatBubble *this,MethodInfo *method)

{
  (this->fields).MessageMinimumSize.x = 60.0;
  (this->fields).MessageMinimumSize.y = 30.0;
  (this->fields).MessageWrapWidth = 300.0;
  (this->fields).isActive = 1;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  return;
}


/* RectTransform get_rectTransform() */

RectTransform *
Assembly-CSharp.dll::ChatBubble::ChatBubble_get_rectTransform(ChatBubble *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    UnityEngine__RectTransform_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::RectTransform>__
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  pRVar1 = (this->fields)._rectTransform;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Implicit
                    ((Object_1 *)pRVar1,(MethodInfo *)0x0);
  if (bVar2 == 0) {
    pRVar1 = (RectTransform *)
             UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                       ((Component *)this,
                        UnityEngine__RectTransform_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::RectTransform>__
                       );
    (this->fields)._rectTransform = pRVar1;
    func_?(&(this->fields)._rectTransform,pRVar1);
  }
  return (this->fields)._rectTransform;
}

