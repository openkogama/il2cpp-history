
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
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
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
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
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
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
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
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
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
            fVar9 = (float)uVar4 - (3.5504395e-29 - (float)uVar7);
            fVar10 = SUB84(uVar4,4) - (3.5504464e-29 - (float)uVar8);
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
                fVar9 = (float)uVar13 - ((float)uVar14 + 3.5504395e-29);
                fVar10 = SUB84(uVar13,4) - ((float)uVar15 + 3.5504464e-29);
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
                    fVar9 = (float)uVar16 - (3.5504395e-29 - (float)uVar17);
                    fVar19 = SUB84(uVar16,4) - (3.5504464e-29 - (float)uVar18);
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
          UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_Play
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
                       (fVar5 - 3.5510092e-29) + pRVar3->m_Height,(MethodInfo *)0x0);
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
        if (fVar4 == 3.5510982e-29) {
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
                       ((float)&stack0xffffffd4 - 3.5510982e-29) + pRVar7->m_Width,(MethodInfo *)0x0
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
                       (fVar5 - 3.5511978e-29) + pRVar3->m_Width,(MethodInfo *)0x0);
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
/* WARNING (jumptable): Unable to track spacebase fully for stack */
/* Void PerformExtenderPosition() */

void Assembly-CSharp.dll::ChatBubble::ChatBubble_PerformExtenderPosition
               (ChatBubble *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  exists = (this->fields).ExtenderComponent;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Implicit
                     ((Object_1 *)exists,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    return;
  }
  info = (ExtenderBorderInfo *)
         UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_main((MethodInfo *)0x0);
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                     ((Object_1 *)info,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar1 == 0) {
code_?:
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    pEVar2 = (this->fields).ExtenderBorderInfo;
    uVar3 = true;
    if (pEVar2 == (ExtenderBorderInfo__Array *)0x0) goto code_?;
    info = (ExtenderBorderInfo *)(this->fields).ExtenderDock;
    uVar3 = info == (ExtenderBorderInfo *)pEVar2->max_length;
    if (info < (ExtenderBorderInfo *)pEVar2->max_length) {
      info = pEVar2->vector[(int)info];
      pTVar4 = (Transform *)ChatBubble_get_rectTransform(this,(MethodInfo *)0x0);
      uVar3 = pTVar4 == (Transform *)0x0;
      if (!(bool)uVar3) {
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                  ((Vector3 *)&stack0xffffffe4,pTVar4,(MethodInfo *)0x0);
        pRVar5 = ChatBubble_get_rectTransform(this,(MethodInfo *)0x0);
        uVar3 = pRVar5 == (RectTransform *)0x0;
        if (!(bool)uVar3) {
          UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_sizeDelta
                    (pRVar5,(MethodInfo *)0x0);
          uVar3 = info == (ExtenderBorderInfo *)0x0;
          if (!(bool)uVar3) {
            ChatBubble_SetExtenderAnchorPosToBorder(this,info,(MethodInfo *)0x0);
            return;
          }
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
    bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                       ((Object_1 *)unaff_EBX,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar1 == 0) goto code_?;
    pCVar6 = (this->fields).anchor;
    uVar3 = pCVar6 == (ChatAnchor *)0x0;
    if (!(bool)uVar3) {
      in_stack_7._._.m_CachedPtr = (Component__Fields)(Object_1__Fields)0x0;
      pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                          ((Component *)pCVar6,(MethodInfo *)0x0);
      uVar3 = pTVar4 == (Transform *)0x0;
      if (!(bool)uVar3) {
        in_stack_7._._.m_CachedPtr = (Component__Fields)&stack0xfffffff0;
        pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                            ((Vector3 *)in_stack_7._._.m_CachedPtr,pTVar4,(MethodInfo *)0x0)
        ;
        uVar3 = info == (ExtenderBorderInfo *)0x0;
        if (!(bool)uVar3) {
          pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_WorldToViewportPoint_1
                              ((Vector3 *)&stack0xffffffe4,(Camera *)info,*pVVar8,(MethodInfo *)0x0
                              );
          uVar9 = pVVar8->x;
          uVar10 = pVVar8->y;
          in_stack_7._._.m_CachedPtr = (Component__Fields)pVVar8->z;
          if (((((float)in_stack_7._._.m_CachedPtr <= 0.0) || ((float)uVar9 <= 0.0)) ||
              (_UNK_? <= (float)uVar9)) ||
             (((float)uVar10 <= 0.0 || (_UNK_? <= (float)uVar10)))) {
            ChatBubble_BindExtenderToClosestBorder(this,(Camera *)info,(MethodInfo *)0x0);
          }
          else {
            ChatBubble_BindExtenderDock(this,ExtenderBorderEnum__Enum_Bottom,(MethodInfo *)0x0);
          }
          goto code_?;
        }
      }
    }
code_?:
    func_?();
  }
  pCVar6 = (ChatAnchor *)&stack0xfffffff0;
  cVar11 = func_?();
  if ((bool)uVar3) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  if (cVar11 == '\x10') {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  if ((cVar11 != '\0') && (pCVar6 = unaff_EBX, cVar11 != '\x10')) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  *(undefined1 *)&((Object_1__Fields *)&pCVar6[-0x10fedfc].monitor)->m_CachedPtr =
       *(undefined1 *)&((Object_1__Fields *)&pCVar6[-0x10fedfc].monitor)->m_CachedPtr;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object,info,this);
    cRam_? = '\x01';
  }
  pvVar13 = (pCVar6->fields)._._._._.m_CachedPtr;
  BStack_14._._.m_CachedPtr = (Component__Fields)(Object_1__Fields)0x0;
  puStack_15 = (undefined *)0x0;
  fVar16 = 0.0;
  exists_00 = *(Object_1 **)((int)pvVar13 + 0x28);
  fVar17 = 0.0;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Implicit
                     (exists_00,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    return;
  }
  pGVar18 = *(Graphic **)((int)pvVar13 + 0x28);
  uVar3 = (POPCOUNT((uint)pGVar18 & 0xff) & 1U) == 0;
  if (pGVar18 != (Graphic *)0x0) {
    pRVar5 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                        (pGVar18,(MethodInfo *)0x0);
    uVar3 = (POPCOUNT((uint)pRVar5 & 0xff) & 1U) == 0;
    if (pRVar5 != (RectTransform *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_pivot
                (pRVar5,(Vector2)0x3f8000003f000000,(MethodInfo *)0x0);
      switch(*(undefined4 *)((int)pvVar13 + 0x30)) {
      case 0:
        pGVar18 = *(Graphic **)((int)pvVar13 + 0x28);
        uVar3 = (POPCOUNT((uint)pGVar18 & 0xff) & 1U) == 0;
        if (pGVar18 != (Graphic *)0x0) {
          pRVar5 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                              (pGVar18,(MethodInfo *)0x0);
          pGVar18 = *(Graphic **)((int)pvVar13 + 0x28);
          uVar3 = (POPCOUNT((uint)pGVar18 & 0xff) & 1U) == 0;
          if (pGVar18 != (Graphic *)0x0) {
            pRVar19 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                                (pGVar18,(MethodInfo *)0x0);
            uVar3 = (POPCOUNT((uint)pRVar19 & 0xff) & 1U) == 0;
            if (pRVar19 != (RectTransform *)0x0) {
              value.y = fVar17;
              value.x = 0.5;
              UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_anchorMax
                        (pRVar19,value,(MethodInfo *)0x0);
              uVar3 = (POPCOUNT((uint)pRVar5 & 0xff) & 1U) == 0;
              if (pRVar5 != (RectTransform *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_anchorMin
                          (pRVar5,(Vector2)0x0,(MethodInfo *)0x0);
                pGVar18 = *(Graphic **)((int)pvVar13 + 0x28);
                uVar3 = (POPCOUNT((uint)pGVar18 & 0xff) & 1U) == 0;
                if (pGVar18 != (Graphic *)0x0) {
                  pTVar4 = (Transform *)
                            UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                                      (pGVar18,(MethodInfo *)0x0);
                  fVar16 = 0.0;
code_?:
                  MVar20.m_CancellationTokenSource =
                       (CancellationTokenSource *)BStack_14._._.m_CachedPtr;
                  MVar20._._._.m_CachedPtr = BStack_14._._.m_CachedPtr;
                  euler_00.z = fVar16;
                  euler_00.x = (float)BStack_14._._.m_CachedPtr;
                  euler_00.y = (float)BStack_14._._.m_CachedPtr;
                  pQVar21 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::
                            Quaternion_Internal_FromEulerRad
                                      ((Quaternion *)&BStack_14,euler_00,(MethodInfo *)0x0);
                  in_stack_7 = MVar20._._._.m_CachedPtr;
                  uVar3 = (POPCOUNT((uint)pTVar4 & 0xff) & 1U) == 0;
                  if (pTVar4 != (Transform *)0x0) {
                    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
                              (pTVar4,*pQVar21,(MethodInfo *)0x0);
                    goto code_?;
                  }
                }
              }
            }
          }
        }
        break;
      case 1:
        pGVar18 = *(Graphic **)((int)pvVar13 + 0x28);
        uVar3 = (POPCOUNT((uint)pGVar18 & 0xff) & 1U) == 0;
        if (pGVar18 != (Graphic *)0x0) {
          pRVar5 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                              (pGVar18,(MethodInfo *)0x0);
          pGVar18 = *(Graphic **)((int)pvVar13 + 0x28);
          uVar3 = (POPCOUNT((uint)pGVar18 & 0xff) & 1U) == 0;
          if (pGVar18 != (Graphic *)0x0) {
            pRVar19 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                                (pGVar18,(MethodInfo *)0x0);
            uVar3 = (POPCOUNT((uint)pRVar19 & 0xff) & 1U) == 0;
            if (pRVar19 != (RectTransform *)0x0) {
              value_00.y = 0.5;
              value_00.x = fVar16;
              UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_anchorMax
                        (pRVar19,value_00,(MethodInfo *)0x0);
              uVar3 = (POPCOUNT((uint)pRVar5 & 0xff) & 1U) == 0;
              if (pRVar5 != (RectTransform *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_anchorMin
                          (pRVar5,(Vector2)0x0,(MethodInfo *)0x0);
                pGVar18 = *(Graphic **)((int)pvVar13 + 0x28);
                uVar3 = (POPCOUNT((uint)pGVar18 & 0xff) & 1U) == 0;
                if (pGVar18 != (Graphic *)0x0) {
                  pTVar4 = (Transform *)
                            UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                                      (pGVar18,(MethodInfo *)0x0);
                  fVar16 = -1.5707964;
code_?:
                  MVar22.m_CancellationTokenSource =
                       (CancellationTokenSource *)BStack_14._._.m_CachedPtr;
                  MVar22._._._.m_CachedPtr = BStack_14._._.m_CachedPtr;
                  euler.z = fVar16;
                  euler.x = (float)BStack_14._._.m_CachedPtr;
                  euler.y = (float)BStack_14._._.m_CachedPtr;
                  pQVar21 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::
                            Quaternion_Internal_FromEulerRad
                                      ((Quaternion *)&BStack_14,euler,(MethodInfo *)0x0);
                  in_stack_7 = MVar22._._._.m_CachedPtr;
                  uVar3 = (POPCOUNT((uint)pTVar4 & 0xff) & 1U) == 0;
                  if (pTVar4 != (Transform *)0x0) {
                    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localRotation
                              (pTVar4,*pQVar21,(MethodInfo *)0x0);
                    goto code_?;
                  }
                }
              }
            }
          }
        }
        break;
      case 2:
        pGVar18 = *(Graphic **)((int)pvVar13 + 0x28);
        uVar3 = (POPCOUNT((uint)pGVar18 & 0xff) & 1U) == 0;
        if (pGVar18 != (Graphic *)0x0) {
          pRVar5 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                              (pGVar18,(MethodInfo *)0x0);
          pGVar18 = *(Graphic **)((int)pvVar13 + 0x28);
          uVar3 = (POPCOUNT((uint)pGVar18 & 0xff) & 1U) == 0;
          if (pGVar18 != (Graphic *)0x0) {
            pRVar19 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                                (pGVar18,(MethodInfo *)0x0);
            uVar3 = (POPCOUNT((uint)pRVar19 & 0xff) & 1U) == 0;
            if (pRVar19 != (RectTransform *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_anchorMax
                        (pRVar19,(Vector2)0x3f0000003f800000,(MethodInfo *)0x0);
              uVar3 = (POPCOUNT((uint)pRVar5 & 0xff) & 1U) == 0;
              if (pRVar5 != (RectTransform *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_anchorMin
                          (pRVar5,(Vector2)0x0,(MethodInfo *)0x0);
                pGVar18 = *(Graphic **)((int)pvVar13 + 0x28);
                uVar3 = (POPCOUNT((uint)pGVar18 & 0xff) & 1U) == 0;
                if (pGVar18 != (Graphic *)0x0) {
                  pTVar4 = (Transform *)
                            UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                                      (pGVar18,(MethodInfo *)0x0);
                  fVar16 = 1.5707964;
                  goto code_?;
                }
              }
            }
          }
        }
        break;
      case 3:
        pGVar18 = *(Graphic **)((int)pvVar13 + 0x28);
        uVar3 = (POPCOUNT((uint)pGVar18 & 0xff) & 1U) == 0;
        if (pGVar18 != (Graphic *)0x0) {
          pRVar5 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                              (pGVar18,(MethodInfo *)0x0);
          pGVar18 = *(Graphic **)((int)pvVar13 + 0x28);
          uVar3 = (POPCOUNT((uint)pGVar18 & 0xff) & 1U) == 0;
          if (pGVar18 != (Graphic *)0x0) {
            pRVar19 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                                (pGVar18,(MethodInfo *)0x0);
            uVar3 = (POPCOUNT((uint)pRVar19 & 0xff) & 1U) == 0;
            if (pRVar19 != (RectTransform *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_anchorMax
                        (pRVar19,(Vector2)0x3f8000003f000000,(MethodInfo *)0x0);
              uVar3 = (POPCOUNT((uint)pRVar5 & 0xff) & 1U) == 0;
              if (pRVar5 != (RectTransform *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_anchorMin
                          (pRVar5,(Vector2)0x0,(MethodInfo *)0x0);
                pGVar18 = *(Graphic **)((int)pvVar13 + 0x28);
                uVar3 = (POPCOUNT((uint)pGVar18 & 0xff) & 1U) == 0;
                if (pGVar18 != (Graphic *)0x0) {
                  pTVar4 = (Transform *)
                            UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                                      (pGVar18,(MethodInfo *)0x0);
                  fVar16 = 3.1415927;
                  goto code_?;
                }
              }
            }
          }
        }
        break;
      default:
code_?:
        pBVar23 = *(Behaviour **)((int)pvVar13 + 0x28);
        uVar3 = (POPCOUNT((uint)pBVar23 & 0xff) & 1U) == 0;
        if (pBVar23 != (Behaviour *)0x0) {
          bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_get_enabled
                             (pBVar23,(MethodInfo *)0x0);
          if (bVar1 == 0) {
code_?:
            pBVar23 = *(Behaviour **)((int)pvVar13 + 0x28);
            uVar3 = (POPCOUNT((uint)pBVar23 & 0xff) & 1U) == 0;
            if (pBVar23 != (Behaviour *)0x0) {
              bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_get_enabled
                                 (pBVar23,(MethodInfo *)0x0);
              if (bVar1 != 0) {
                return;
              }
              uVar24 = *(uint *)((int)pvVar13 + 0x2c);
              uVar3 = (POPCOUNT(uVar24 & 0xff) & 1U) == 0;
              if (uVar24 != 0) {
                uVar25 = *(uint *)((int)pvVar13 + 0x30);
                uVar3 = (POPCOUNT(uVar25 - *(uint *)(uVar24 + 0xc) & 0xff) & 1U) == 0;
                if (*(uint *)(uVar24 + 0xc) <= uVar25) goto code_?;
                uVar24 = *(uint *)(uVar24 + 0x10 + uVar25 * 4);
                uVar3 = (POPCOUNT(uVar24 & 0xff) & 1U) == 0;
                if (uVar24 != 0) {
                  if (*(char *)(uVar24 + 0xc) == '\0') {
                    return;
                  }
                  pBVar23 = *(Behaviour **)((int)pvVar13 + 0x28);
                  uVar3 = (POPCOUNT((uint)pBVar23 & 0xff) & 1U) == 0;
                  if (pBVar23 != (Behaviour *)0x0) {
                    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                              (pBVar23,1,(MethodInfo *)0x0);
                    return;
                  }
                }
              }
            }
          }
          else {
            uVar24 = *(uint *)((int)pvVar13 + 0x2c);
            uVar3 = (POPCOUNT(uVar24 & 0xff) & 1U) == 0;
            if (uVar24 != 0) {
              uVar25 = *(uint *)((int)pvVar13 + 0x30);
              uVar3 = (POPCOUNT(uVar25 - *(uint *)(uVar24 + 0xc) & 0xff) & 1U) == 0;
              if (*(uint *)(uVar24 + 0xc) <= uVar25) goto code_?;
              uVar24 = *(uint *)(uVar24 + 0x10 + uVar25 * 4);
              uVar3 = (POPCOUNT(uVar24 & 0xff) & 1U) == 0;
              if (uVar24 != 0) {
                if (*(char *)(uVar24 + 0xc) != '\0') goto code_?;
                pBVar23 = *(Behaviour **)((int)pvVar13 + 0x28);
                uVar3 = (POPCOUNT((uint)pBVar23 & 0xff) & 1U) == 0;
                if (pBVar23 != (Behaviour *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                            (pBVar23,0,(MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  if (!(bool)uVar3) {
    cRam_? = cRam_? + (char)extraout_DX;
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  in(extraout_DX);
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pTVar26 = *(Text **)((int)in_stack_7._._.m_CachedPtr + 0x10);
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Implicit
                     ((Object_1 *)pTVar26,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    return;
  }
  if (*(Text **)((int)in_stack_7._._.m_CachedPtr + 0x10) != (Text *)0x0) {
    (*(code *)((*(Text **)((int)in_stack_7._._.m_CachedPtr + 0x10))->klass->vtable).get_text.
              method)();
    if (*(Text **)((int)in_stack_7._._.m_CachedPtr + 0x10) != (Text *)0x0) {
      (*(code *)((*(Text **)((int)in_stack_7._._.m_CachedPtr + 0x10))->klass->vtable).
                set_text.method)();
      ChatBubble_PerformAutoSize((ChatBubble *)in_stack_7._._.m_CachedPtr,(MethodInfo *)0x0);
      if ((*(Text **)((int)in_stack_7._._.m_CachedPtr + 0x10) != (Text *)0x0) &&
         (pRVar5 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                              ((Graphic *)*(Text **)((int)in_stack_7._._.m_CachedPtr + 0x10),
                               (MethodInfo *)0x0), pRVar5 != (RectTransform *)0x0)) {
        pRVar27 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_rect
                            ((Rect *)&stack0xffffffd8,pRVar5,(MethodInfo *)0x0);
        fVar16 = pRVar27->m_Height;
        pTVar26 = *(Text **)((int)in_stack_7._._.m_CachedPtr + 0x10);
        ((Vector2 *)((int)in_stack_7._._.m_CachedPtr + 0x1c))->x = pRVar27->m_Width;
        *(float *)((int)in_stack_7._._.m_CachedPtr + 0x20) = fVar16;
        if (pTVar26 != (Text *)0x0) {
          (*(code *)(pTVar26->klass->vtable).set_text.method)();
          return;
        }
      }
    }
  }
  func_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void PerformExtenderSnap() */

void Assembly-CSharp.dll::ChatBubble::ChatBubble_PerformExtenderSnap
               (ChatBubble *this,MethodInfo *method)

{
  uVar1 = CONCAT44(unaff_EBX,in_stack_2);
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  fStack_3 = 0.0;
  puStack_4 = (undefined *)0x0;
  fVar5 = 0.0;
  pIVar6 = (this->fields).ExtenderComponent;
  fVar7 = 0.0;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar8 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Implicit
                    ((Object_1 *)pIVar6,(MethodInfo *)0x0);
  if (bVar8 == 0) {
    return;
  }
  pIVar9 = (this->fields).ExtenderComponent;
  uVar10 = (POPCOUNT((uint)pIVar9 & 0xff) & 1U) == 0;
  if (pIVar9 != (Image *)0x0) {
    pRVar11 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                       ((Graphic *)pIVar9,(MethodInfo *)0x0);
    uVar10 = (POPCOUNT((uint)pRVar11 & 0xff) & 1U) == 0;
    if (pRVar11 != (RectTransform *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_pivot
                (pRVar11,(Vector2)0x3f8000003f000000,(MethodInfo *)0x0);
      switch((this->fields).ExtenderDock) {
      case 0:
        pIVar9 = (this->fields).ExtenderComponent;
        uVar10 = (POPCOUNT((uint)pIVar9 & 0xff) & 1U) == 0;
        if (pIVar9 != (Image *)0x0) {
          pIVar6 = (Image *)UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                                      ((Graphic *)pIVar9,(MethodInfo *)0x0);
          pIVar9 = (this->fields).ExtenderComponent;
          uVar10 = (POPCOUNT((uint)pIVar9 & 0xff) & 1U) == 0;
          if (pIVar9 != (Image *)0x0) {
            pRVar11 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                               ((Graphic *)pIVar9,(MethodInfo *)0x0);
            uVar10 = (POPCOUNT((uint)pRVar11 & 0xff) & 1U) == 0;
            if (pRVar11 != (RectTransform *)0x0) {
              value.y = fVar7;
              value.x = 0.5;
              UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_anchorMax
                        (pRVar11,value,(MethodInfo *)0x0);
              uVar10 = (POPCOUNT((uint)pIVar6 & 0xff) & 1U) == 0;
              if (pIVar6 != (Image *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_anchorMin
                          ((RectTransform *)pIVar6,(Vector2)0x0,(MethodInfo *)0x0);
                pIVar9 = (this->fields).ExtenderComponent;
                uVar10 = (POPCOUNT((uint)pIVar9 & 0xff) & 1U) == 0;
                if (pIVar9 != (Image *)0x0) {
                  pIVar6 = (Image *)UnityEngine.UI.dll::UnityEngine::UI::Graphic::
                                    Graphic_get_rectTransform((Graphic *)pIVar9,(MethodInfo *)0x0);
                  fVar5 = 0.0;
code_?:
                  uVar1 = CONCAT44(fStack_3,fStack_3);
                  euler_00.z = fVar5;
                  euler_00.x = fStack_3;
                  euler_00.y = fStack_3;
                  pQVar12 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::
                            Quaternion_Internal_FromEulerRad
                                      ((Quaternion *)&fStack_3,euler_00,(MethodInfo *)0x0);
                  uVar10 = (POPCOUNT((uint)pIVar6 & 0xff) & 1U) == 0;
                  if (pIVar6 != (Image *)0x0) {
                    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
                              ((Transform *)pIVar6,*pQVar12,(MethodInfo *)0x0);
                    goto code_?;
                  }
                }
              }
            }
          }
        }
        break;
      case 1:
        pIVar9 = (this->fields).ExtenderComponent;
        uVar10 = (POPCOUNT((uint)pIVar9 & 0xff) & 1U) == 0;
        if (pIVar9 != (Image *)0x0) {
          pIVar6 = (Image *)UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                                      ((Graphic *)pIVar9,(MethodInfo *)0x0);
          pIVar9 = (this->fields).ExtenderComponent;
          uVar10 = (POPCOUNT((uint)pIVar9 & 0xff) & 1U) == 0;
          if (pIVar9 != (Image *)0x0) {
            pRVar11 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                               ((Graphic *)pIVar9,(MethodInfo *)0x0);
            uVar10 = (POPCOUNT((uint)pRVar11 & 0xff) & 1U) == 0;
            if (pRVar11 != (RectTransform *)0x0) {
              value_00.y = 0.5;
              value_00.x = fVar5;
              UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_anchorMax
                        (pRVar11,value_00,(MethodInfo *)0x0);
              uVar10 = (POPCOUNT((uint)pIVar6 & 0xff) & 1U) == 0;
              if (pIVar6 != (Image *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_anchorMin
                          ((RectTransform *)pIVar6,(Vector2)0x0,(MethodInfo *)0x0);
                pIVar9 = (this->fields).ExtenderComponent;
                uVar10 = (POPCOUNT((uint)pIVar9 & 0xff) & 1U) == 0;
                if (pIVar9 != (Image *)0x0) {
                  pIVar6 = (Image *)UnityEngine.UI.dll::UnityEngine::UI::Graphic::
                                    Graphic_get_rectTransform((Graphic *)pIVar9,(MethodInfo *)0x0);
                  fVar5 = -1.5707964;
code_?:
                  uVar1 = CONCAT44(fStack_3,fStack_3);
                  euler.z = fVar5;
                  euler.x = fStack_3;
                  euler.y = fStack_3;
                  pQVar12 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::
                            Quaternion_Internal_FromEulerRad
                                      ((Quaternion *)&fStack_3,euler,(MethodInfo *)0x0);
                  uVar10 = (POPCOUNT((uint)pIVar6 & 0xff) & 1U) == 0;
                  if (pIVar6 != (Image *)0x0) {
                    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localRotation
                              ((Transform *)pIVar6,*pQVar12,(MethodInfo *)0x0);
                    goto code_?;
                  }
                }
              }
            }
          }
        }
        break;
      case 2:
        pIVar9 = (this->fields).ExtenderComponent;
        uVar10 = (POPCOUNT((uint)pIVar9 & 0xff) & 1U) == 0;
        if (pIVar9 != (Image *)0x0) {
          pIVar6 = (Image *)UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                                      ((Graphic *)pIVar9,(MethodInfo *)0x0);
          pIVar9 = (this->fields).ExtenderComponent;
          uVar10 = (POPCOUNT((uint)pIVar9 & 0xff) & 1U) == 0;
          if (pIVar9 != (Image *)0x0) {
            pRVar11 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                               ((Graphic *)pIVar9,(MethodInfo *)0x0);
            uVar10 = (POPCOUNT((uint)pRVar11 & 0xff) & 1U) == 0;
            if (pRVar11 != (RectTransform *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_anchorMax
                        (pRVar11,(Vector2)0x3f0000003f800000,(MethodInfo *)0x0);
              uVar10 = (POPCOUNT((uint)pIVar6 & 0xff) & 1U) == 0;
              if (pIVar6 != (Image *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_anchorMin
                          ((RectTransform *)pIVar6,(Vector2)0x0,(MethodInfo *)0x0);
                pIVar9 = (this->fields).ExtenderComponent;
                uVar10 = (POPCOUNT((uint)pIVar9 & 0xff) & 1U) == 0;
                if (pIVar9 != (Image *)0x0) {
                  pIVar6 = (Image *)UnityEngine.UI.dll::UnityEngine::UI::Graphic::
                                    Graphic_get_rectTransform((Graphic *)pIVar9,(MethodInfo *)0x0);
                  fVar5 = 1.5707964;
                  goto code_?;
                }
              }
            }
          }
        }
        break;
      case 3:
        pIVar9 = (this->fields).ExtenderComponent;
        uVar10 = (POPCOUNT((uint)pIVar9 & 0xff) & 1U) == 0;
        if (pIVar9 != (Image *)0x0) {
          pIVar6 = (Image *)UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                                      ((Graphic *)pIVar9,(MethodInfo *)0x0);
          pIVar9 = (this->fields).ExtenderComponent;
          uVar10 = (POPCOUNT((uint)pIVar9 & 0xff) & 1U) == 0;
          if (pIVar9 != (Image *)0x0) {
            pRVar11 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                               ((Graphic *)pIVar9,(MethodInfo *)0x0);
            uVar10 = (POPCOUNT((uint)pRVar11 & 0xff) & 1U) == 0;
            if (pRVar11 != (RectTransform *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_anchorMax
                        (pRVar11,(Vector2)0x3f8000003f000000,(MethodInfo *)0x0);
              uVar10 = (POPCOUNT((uint)pIVar6 & 0xff) & 1U) == 0;
              if (pIVar6 != (Image *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_anchorMin
                          ((RectTransform *)pIVar6,(Vector2)0x0,(MethodInfo *)0x0);
                pIVar9 = (this->fields).ExtenderComponent;
                uVar10 = (POPCOUNT((uint)pIVar9 & 0xff) & 1U) == 0;
                if (pIVar9 != (Image *)0x0) {
                  pIVar6 = (Image *)UnityEngine.UI.dll::UnityEngine::UI::Graphic::
                                    Graphic_get_rectTransform((Graphic *)pIVar9,(MethodInfo *)0x0);
                  fVar5 = 3.1415927;
                  goto code_?;
                }
              }
            }
          }
        }
        break;
      default:
code_?:
        pIVar9 = (this->fields).ExtenderComponent;
        uVar10 = (POPCOUNT((uint)pIVar9 & 0xff) & 1U) == 0;
        if (pIVar9 != (Image *)0x0) {
          bVar8 = UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_get_enabled
                            ((Behaviour *)pIVar9,(MethodInfo *)0x0);
          if (bVar8 == 0) {
code_?:
            pIVar9 = (this->fields).ExtenderComponent;
            uVar10 = (POPCOUNT((uint)pIVar9 & 0xff) & 1U) == 0;
            if (pIVar9 != (Image *)0x0) {
              bVar8 = UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_get_enabled
                                ((Behaviour *)pIVar9,(MethodInfo *)0x0);
              if (bVar8 != 0) {
                return;
              }
              pEVar13 = (this->fields).ExtenderBorderInfo;
              uVar10 = (POPCOUNT((uint)pEVar13 & 0xff) & 1U) == 0;
              if (pEVar13 != (ExtenderBorderInfo__Array *)0x0) {
                uVar14 = (this->fields).ExtenderDock;
                uVar10 = (POPCOUNT(uVar14 - pEVar13->max_length & 0xff) & 1U) == 0;
                if (pEVar13->max_length <= uVar14) goto code_?;
                pEVar15 = pEVar13->vector[uVar14];
                uVar10 = (POPCOUNT((uint)pEVar15 & 0xff) & 1U) == 0;
                if (pEVar15 != (ExtenderBorderInfo *)0x0) {
                  if ((pEVar15->fields).Enabled == 0) {
                    return;
                  }
                  pIVar9 = (this->fields).ExtenderComponent;
                  uVar10 = (POPCOUNT((uint)pIVar9 & 0xff) & 1U) == 0;
                  if (pIVar9 != (Image *)0x0) {
                    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                              ((Behaviour *)pIVar9,1,(MethodInfo *)0x0);
                    return;
                  }
                }
              }
            }
          }
          else {
            pEVar13 = (this->fields).ExtenderBorderInfo;
            uVar10 = (POPCOUNT((uint)pEVar13 & 0xff) & 1U) == 0;
            if (pEVar13 != (ExtenderBorderInfo__Array *)0x0) {
              uVar14 = (this->fields).ExtenderDock;
              uVar10 = (POPCOUNT(uVar14 - pEVar13->max_length & 0xff) & 1U) == 0;
              if (pEVar13->max_length <= uVar14) goto code_?;
              pEVar15 = pEVar13->vector[uVar14];
              uVar10 = (POPCOUNT((uint)pEVar15 & 0xff) & 1U) == 0;
              if (pEVar15 != (ExtenderBorderInfo *)0x0) {
                if ((pEVar15->fields).Enabled != 0) goto code_?;
                pIVar9 = (this->fields).ExtenderComponent;
                uVar10 = (POPCOUNT((uint)pIVar9 & 0xff) & 1U) == 0;
                if (pIVar9 != (Image *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                            ((Behaviour *)pIVar9,0,(MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  if (!(bool)uVar10) {
    cRam_? = cRam_? + (char)extraout_DX;
    pcVar16 = (code *)swi(3);
    (*pcVar16)();
    return;
  }
  in(extraout_DX);
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  this_00 = (ChatBubble *)uVar1;
  pTVar17 = (this_00->fields).MessageComponent;
  pIStack18 = pIVar6;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  pIVar6 = (Image *)((ulonglong)uVar1 >> 0x20);
  bVar8 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Implicit
                    ((Object_1 *)pTVar17,(MethodInfo *)0x0);
  if (bVar8 != 0) {
    pIVar9 = (Image *)(this_00->fields).MessageComponent;
    if (pIVar9 != (Image *)0x0) {
      pIStack18 = pIVar9;
      uVar19 = (*(code *)(pIVar9->klass->vtable).get_flexibleHeight.method)();
      pTVar17 = (this_00->fields).MessageComponent;
      if (pTVar17 != (Text *)0x0) {
        pIStack18 = pIVar6;
        (*(code *)(pTVar17->klass->vtable).set_text.method)();
        ChatBubble_PerformAutoSize(this_00,(MethodInfo *)0x0);
        pTVar17 = (this_00->fields).MessageComponent;
        if ((pTVar17 != (Text *)0x0) &&
           (pRVar11 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                               ((Graphic *)pTVar17,(MethodInfo *)0x0), pRVar11 != (RectTransform *)0x0
           )) {
          pRVar20 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_rect
                              ((Rect *)&stack0xffffffd8,pRVar11,(MethodInfo *)0x0);
          fVar5 = pRVar20->m_Height;
          pTVar17 = (this_00->fields).MessageComponent;
          (this_00->fields).MessageMinimumSize.x = pRVar20->m_Width;
          (this_00->fields).MessageMinimumSize.y = fVar5;
          if (pTVar17 != (Text *)0x0) {
            pIStack18 = (Image *)uVar19;
            (*(code *)(pTVar17->klass->vtable).set_text.method)();
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
    this_00 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                        ((Graphic *)pIVar1,(MethodInfo *)0x0);
    pIVar1 = (this->fields).ExtenderComponent;
    if ((pIVar1 == (Image *)0x0) ||
       (pRVar2 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                           ((Graphic *)pIVar1,(MethodInfo *)0x0), pRVar2 == (RectTransform *)0x0))
    goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_anchoredPosition
              (pRVar2,(MethodInfo *)0x0);
    goto joined_?;
  case 1:
    pIVar1 = (this->fields).ExtenderComponent;
    if (((pIVar1 == (Image *)0x0) ||
        (this_00 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                             ((Graphic *)pIVar1,(MethodInfo *)0x0),
        info == (ExtenderBorderInfo *)0x0)) ||
       ((pIVar1 = (this->fields).ExtenderComponent, pIVar1 == (Image *)0x0 ||
        (pRVar2 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                            ((Graphic *)pIVar1,(MethodInfo *)0x0), pRVar2 == (RectTransform *)0x0)))
       ) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_anchoredPosition
              (pRVar2,(MethodInfo *)0x0);
    break;
  case 2:
    pIVar1 = (this->fields).ExtenderComponent;
    if ((((pIVar1 == (Image *)0x0) ||
         (this_00 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                              ((Graphic *)pIVar1,(MethodInfo *)0x0),
         info == (ExtenderBorderInfo *)0x0)) ||
        (pIVar1 = (this->fields).ExtenderComponent, pIVar1 == (Image *)0x0)) ||
       (pRVar2 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                           ((Graphic *)pIVar1,(MethodInfo *)0x0), pRVar2 == (RectTransform *)0x0))
    goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_anchoredPosition
              (pRVar2,(MethodInfo *)0x0);
    break;
  case 3:
    pIVar1 = (this->fields).ExtenderComponent;
    if (pIVar1 == (Image *)0x0) goto code_?;
    this_00 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                        ((Graphic *)pIVar1,(MethodInfo *)0x0);
    pIVar1 = (this->fields).ExtenderComponent;
    if ((pIVar1 == (Image *)0x0) ||
       (pRVar2 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                           ((Graphic *)pIVar1,(MethodInfo *)0x0), pRVar2 == (RectTransform *)0x0))
    goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_anchoredPosition
              (pRVar2,(MethodInfo *)0x0);
joined_?:
    if (info == (ExtenderBorderInfo *)0x0) goto code_?;
    break;
  default:
    goto code_?;
  }
  if (this_00 != (RectTransform *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_anchoredPosition
              (this_00,(Vector2)0x0,(MethodInfo *)0x0);
code_?:
    return;
  }
code_?:
  cVar3 = '\0';
  bVar4 = 0;
  uVar5 = func_?();
  pcVar6 = (code *)swi(4);
  if (cVar3 == '\x01') {
    uVar5 = (*pcVar6)();
  }
  piVar7 = (int *)((int)uVar5 + (int)((ulonglong)uVar5 >> 0x20));
  *piVar7 = (*piVar7 - (int)this) - (uint)bVar4;
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
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

