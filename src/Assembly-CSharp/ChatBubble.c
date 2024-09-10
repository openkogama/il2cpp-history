
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
            fVar9 = (float)uVar4 - (3.557373e-29 - (float)uVar7);
            fVar10 = SUB84(uVar4,4) - (3.5573798e-29 - (float)uVar8);
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
                fVar9 = (float)uVar13 - ((float)uVar14 + 3.557373e-29);
                fVar10 = SUB84(uVar13,4) - ((float)uVar15 + 3.5573798e-29);
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
                    fVar9 = (float)uVar16 - (3.557373e-29 - (float)uVar17);
                    fVar19 = SUB84(uVar16,4) - (3.5573798e-29 - (float)uVar18);
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
                       (fVar5 - 3.5579425e-29) + pRVar3->m_Height,(MethodInfo *)0x0);
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
        if (fVar4 == 3.5580316e-29) {
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
                       ((float)&stack0xffffffd4 - 3.5580316e-29) + pRVar7->m_Width,(MethodInfo *)0x0
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
                       (fVar5 - 3.5581312e-29) + pRVar3->m_Width,(MethodInfo *)0x0);
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
  pIVar1 = (this->fields).ExtenderComponent;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  puVar2 = &UNK_?;
  bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Implicit
                     ((Object_1 *)pIVar1,(MethodInfo *)0x0);
  if (bVar3 == 0) {
    return;
  }
  info = (ExtenderBorderInfo *)
         UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_main((MethodInfo *)0x0);
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                     ((Object_1 *)info,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar3 == 0) {
code_?:
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    pEVar4 = (this->fields).ExtenderBorderInfo;
    uVar5 = true;
    if (pEVar4 == (ExtenderBorderInfo__Array *)0x0) goto code_?;
    info = (ExtenderBorderInfo *)(this->fields).ExtenderDock;
    uVar5 = info == (ExtenderBorderInfo *)pEVar4->max_length;
    if (info < (ExtenderBorderInfo *)pEVar4->max_length) {
      info = pEVar4->vector[(int)info];
      pTVar6 = (Transform *)ChatBubble_get_rectTransform(this,(MethodInfo *)0x0);
      uVar5 = pTVar6 == (Transform *)0x0;
      if (!(bool)uVar5) {
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                  ((Vector3 *)&stack0xffffffe4,pTVar6,(MethodInfo *)0x0);
        pRVar7 = ChatBubble_get_rectTransform(this,(MethodInfo *)0x0);
        uVar5 = pRVar7 == (RectTransform *)0x0;
        if (!(bool)uVar5) {
          UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_sizeDelta
                    (pRVar7,(MethodInfo *)0x0);
          uVar5 = info == (ExtenderBorderInfo *)0x0;
          if (!(bool)uVar5) {
            ChatBubble_SetExtenderAnchorPosToBorder(this,info,(MethodInfo *)0x0);
            return;
          }
        }
      }
      goto code_?;
    }
  }
  else {
    pCVar8 = (this->fields).anchor;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                       ((Object_1 *)pCVar8,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar3 == 0) goto code_?;
    pCVar8 = (this->fields).anchor;
    uVar5 = pCVar8 == (ChatAnchor *)0x0;
    if (!(bool)uVar5) {
      in_stack_9 = (Vector3 *)0x0;
      pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                          ((Component *)pCVar8,(MethodInfo *)0x0);
      uVar5 = pTVar6 == (Transform *)0x0;
      if (!(bool)uVar5) {
        in_stack_9 = (Vector3 *)&stack0xfffffff0;
        pVVar10 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                            (in_stack_9,pTVar6,(MethodInfo *)0x0);
        uVar5 = info == (ExtenderBorderInfo *)0x0;
        if (!(bool)uVar5) {
          pVVar10 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_WorldToViewportPoint_1
                              ((Vector3 *)&stack0xffffffe4,(Camera *)info,*pVVar10,(MethodInfo *)0x0
                              );
          uVar11 = pVVar10->x;
          uVar12 = pVVar10->y;
          in_stack_9 = (Vector3 *)pVVar10->z;
          if (((((float)in_stack_9 <= 0.0) || ((float)uVar11 <= 0.0)) ||
              (_UNK_? <= (float)uVar11)) ||
             (((float)uVar12 <= 0.0 || (_UNK_? <= (float)uVar12)))) {
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
  pIVar1 = (Image *)func_?();
  if (!(bool)uVar5) {
    pcVar13 = (char *)((uint)pIVar1 ^ 0x10);
    cVar14 = (char)pcVar13;
    if ((char)pIVar1 == '\x10') {
      *pcVar13 = *pcVar13;
      *pcVar13 = *pcVar13 + cVar14;
      if (*pcVar13 == '\0') goto code_?;
    }
    else {
      if ((cVar14 != '\x10') && (cVar14 != '\0')) {
        pcVar15 = (code *)swi(3);
        (*pcVar15)();
        return;
      }
code_?:
      func_?();
    }
    bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Implicit
                       ((Object_1 *)info,(MethodInfo *)0x0);
    if (bVar3 == 0) {
      return;
    }
    pIVar1 = (this->fields).ExtenderComponent;
  }
  uVar5 = (POPCOUNT((uint)pIVar1 & 0xff) & 1U) == 0;
  if (pIVar1 != (Image *)0x0) {
    pRVar7 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                        ((Graphic *)pIVar1,(MethodInfo *)0x0);
    uVar5 = (POPCOUNT((uint)pRVar7 & 0xff) & 1U) == 0;
    if (pRVar7 != (RectTransform *)0x0) {
      fVar16 = 0.0;
      UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_pivot
                (pRVar7,(Vector2)0x3f8000003f000000,(MethodInfo *)0x0);
      switch((this->fields).ExtenderDock) {
      case 0:
        pIVar1 = (this->fields).ExtenderComponent;
        uVar5 = (POPCOUNT((uint)pIVar1 & 0xff) & 1U) == 0;
        if (pIVar1 != (Image *)0x0) {
          info = (ExtenderBorderInfo *)
                 UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                           ((Graphic *)pIVar1,(MethodInfo *)0x0);
          pIVar1 = (this->fields).ExtenderComponent;
          uVar5 = (POPCOUNT((uint)pIVar1 & 0xff) & 1U) == 0;
          if (pIVar1 != (Image *)0x0) {
            pRVar7 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                                ((Graphic *)pIVar1,(MethodInfo *)0x0);
            fVar16 = 0.5;
            uVar5 = (POPCOUNT((uint)pRVar7 & 0xff) & 1U) == 0;
            if (pRVar7 != (RectTransform *)0x0) {
              value.y = (float)in_stack_9;
              value.x = 0.5;
              UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_anchorMax
                        (pRVar7,value,(MethodInfo *)0x0);
              uVar5 = (POPCOUNT((uint)info & 0xff) & 1U) == 0;
              if (info != (ExtenderBorderInfo *)0x0) {
                value_01.y = (float)in_stack_9;
                value_01.x = fVar16;
                UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_anchorMin
                          ((RectTransform *)info,value_01,(MethodInfo *)0x0);
                pIVar1 = (this->fields).ExtenderComponent;
                uVar5 = (POPCOUNT((uint)pIVar1 & 0xff) & 1U) == 0;
                if (pIVar1 != (Image *)0x0) {
                  info = (ExtenderBorderInfo *)
                         UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                                   ((Graphic *)pIVar1,(MethodInfo *)0x0);
                  fVar16 = 0.0;
code_?:
                  euler_00.y = (float)puVar2;
                  euler_00.x = (float)puVar2;
                  euler_00.z = fVar16;
                  pQVar17 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::
                            Quaternion_Internal_FromEulerRad
                                      ((Quaternion *)&stack0xffffffcc,euler_00,(MethodInfo *)0x0);
                  uVar5 = (POPCOUNT((uint)info & 0xff) & 1U) == 0;
                  if (info != (ExtenderBorderInfo *)0x0) {
                    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
                              ((Transform *)info,*pQVar17,(MethodInfo *)0x0);
                    goto code_?;
                  }
                }
              }
            }
          }
        }
        break;
      case 1:
        pIVar1 = (this->fields).ExtenderComponent;
        uVar5 = (POPCOUNT((uint)pIVar1 & 0xff) & 1U) == 0;
        if (pIVar1 != (Image *)0x0) {
          info = (ExtenderBorderInfo *)
                 UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                           ((Graphic *)pIVar1,(MethodInfo *)0x0);
          pIVar1 = (this->fields).ExtenderComponent;
          uVar5 = (POPCOUNT((uint)pIVar1 & 0xff) & 1U) == 0;
          if (pIVar1 != (Image *)0x0) {
            pRVar7 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                                ((Graphic *)pIVar1,(MethodInfo *)0x0);
            fVar18 = 0.5;
            uVar5 = (POPCOUNT((uint)pRVar7 & 0xff) & 1U) == 0;
            if (pRVar7 != (RectTransform *)0x0) {
              value_00.y = 0.5;
              value_00.x = fVar16;
              UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_anchorMax
                        (pRVar7,value_00,(MethodInfo *)0x0);
              uVar5 = (POPCOUNT((uint)info & 0xff) & 1U) == 0;
              if (info != (ExtenderBorderInfo *)0x0) {
                value_02.y = fVar18;
                value_02.x = fVar16;
                UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_anchorMin
                          ((RectTransform *)info,value_02,(MethodInfo *)0x0);
                pIVar1 = (this->fields).ExtenderComponent;
                uVar5 = (POPCOUNT((uint)pIVar1 & 0xff) & 1U) == 0;
                if (pIVar1 != (Image *)0x0) {
                  info = (ExtenderBorderInfo *)
                         UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                                   ((Graphic *)pIVar1,(MethodInfo *)0x0);
                  fVar16 = -1.5707964;
code_?:
                  euler.y = (float)puVar2;
                  euler.x = (float)puVar2;
                  euler.z = fVar16;
                  pQVar17 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::
                            Quaternion_Internal_FromEulerRad
                                      ((Quaternion *)&stack0xffffffcc,euler,(MethodInfo *)0x0);
                  uVar5 = (POPCOUNT((uint)info & 0xff) & 1U) == 0;
                  if (info != (ExtenderBorderInfo *)0x0) {
                    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localRotation
                              ((Transform *)info,*pQVar17,(MethodInfo *)0x0);
                    goto code_?;
                  }
                }
              }
            }
          }
        }
        break;
      case 2:
        pIVar1 = (this->fields).ExtenderComponent;
        uVar5 = (POPCOUNT((uint)pIVar1 & 0xff) & 1U) == 0;
        if (pIVar1 != (Image *)0x0) {
          info = (ExtenderBorderInfo *)
                 UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                           ((Graphic *)pIVar1,(MethodInfo *)0x0);
          pIVar1 = (this->fields).ExtenderComponent;
          uVar5 = (POPCOUNT((uint)pIVar1 & 0xff) & 1U) == 0;
          if (pIVar1 != (Image *)0x0) {
            pRVar7 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                                ((Graphic *)pIVar1,(MethodInfo *)0x0);
            fVar16 = 1.0;
            fVar18 = 0.5;
            uVar5 = (POPCOUNT((uint)pRVar7 & 0xff) & 1U) == 0;
            if (pRVar7 != (RectTransform *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_anchorMax
                        (pRVar7,(Vector2)0x3f0000003f800000,(MethodInfo *)0x0);
              uVar5 = (POPCOUNT((uint)info & 0xff) & 1U) == 0;
              if (info != (ExtenderBorderInfo *)0x0) {
                value_03.y = fVar18;
                value_03.x = fVar16;
                UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_anchorMin
                          ((RectTransform *)info,value_03,(MethodInfo *)0x0);
                pIVar1 = (this->fields).ExtenderComponent;
                uVar5 = (POPCOUNT((uint)pIVar1 & 0xff) & 1U) == 0;
                if (pIVar1 != (Image *)0x0) {
                  info = (ExtenderBorderInfo *)
                         UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                                   ((Graphic *)pIVar1,(MethodInfo *)0x0);
                  fVar16 = 1.5707964;
                  goto code_?;
                }
              }
            }
          }
        }
        break;
      case 3:
        pIVar1 = (this->fields).ExtenderComponent;
        uVar5 = (POPCOUNT((uint)pIVar1 & 0xff) & 1U) == 0;
        if (pIVar1 != (Image *)0x0) {
          info = (ExtenderBorderInfo *)
                 UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                           ((Graphic *)pIVar1,(MethodInfo *)0x0);
          pIVar1 = (this->fields).ExtenderComponent;
          uVar5 = (POPCOUNT((uint)pIVar1 & 0xff) & 1U) == 0;
          if (pIVar1 != (Image *)0x0) {
            pRVar7 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                                ((Graphic *)pIVar1,(MethodInfo *)0x0);
            fVar16 = 0.5;
            fVar18 = 1.0;
            uVar5 = (POPCOUNT((uint)pRVar7 & 0xff) & 1U) == 0;
            if (pRVar7 != (RectTransform *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_anchorMax
                        (pRVar7,(Vector2)0x3f8000003f000000,(MethodInfo *)0x0);
              uVar5 = (POPCOUNT((uint)info & 0xff) & 1U) == 0;
              if (info != (ExtenderBorderInfo *)0x0) {
                value_04.y = fVar18;
                value_04.x = fVar16;
                UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_anchorMin
                          ((RectTransform *)info,value_04,(MethodInfo *)0x0);
                pIVar1 = (this->fields).ExtenderComponent;
                uVar5 = (POPCOUNT((uint)pIVar1 & 0xff) & 1U) == 0;
                if (pIVar1 != (Image *)0x0) {
                  info = (ExtenderBorderInfo *)
                         UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                                   ((Graphic *)pIVar1,(MethodInfo *)0x0);
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
        pIVar1 = (this->fields).ExtenderComponent;
        uVar5 = (POPCOUNT((uint)pIVar1 & 0xff) & 1U) == 0;
        if (pIVar1 != (Image *)0x0) {
          bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_get_enabled
                             ((Behaviour *)pIVar1,(MethodInfo *)0x0);
          if (bVar3 == 0) {
code_?:
            pIVar1 = (this->fields).ExtenderComponent;
            uVar5 = (POPCOUNT((uint)pIVar1 & 0xff) & 1U) == 0;
            if (pIVar1 != (Image *)0x0) {
              bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_get_enabled
                                 ((Behaviour *)pIVar1,(MethodInfo *)0x0);
              if (bVar3 != 0) {
                return;
              }
              pEVar4 = (this->fields).ExtenderBorderInfo;
              uVar5 = (POPCOUNT((uint)pEVar4 & 0xff) & 1U) == 0;
              if (pEVar4 != (ExtenderBorderInfo__Array *)0x0) {
                uVar19 = (this->fields).ExtenderDock;
                uVar5 = (POPCOUNT(uVar19 - pEVar4->max_length & 0xff) & 1U) == 0;
                if (pEVar4->max_length <= uVar19) goto code_?;
                pEVar20 = pEVar4->vector[uVar19];
                uVar5 = (POPCOUNT((uint)pEVar20 & 0xff) & 1U) == 0;
                if (pEVar20 != (ExtenderBorderInfo *)0x0) {
                  if ((pEVar20->fields).Enabled == 0) {
                    return;
                  }
                  pIVar1 = (this->fields).ExtenderComponent;
                  uVar5 = (POPCOUNT((uint)pIVar1 & 0xff) & 1U) == 0;
                  if (pIVar1 != (Image *)0x0) {
                    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                              ((Behaviour *)pIVar1,1,(MethodInfo *)0x0);
                    return;
                  }
                }
              }
            }
          }
          else {
            pEVar4 = (this->fields).ExtenderBorderInfo;
            uVar5 = (POPCOUNT((uint)pEVar4 & 0xff) & 1U) == 0;
            if (pEVar4 != (ExtenderBorderInfo__Array *)0x0) {
              uVar19 = (this->fields).ExtenderDock;
              uVar5 = (POPCOUNT(uVar19 - pEVar4->max_length & 0xff) & 1U) == 0;
              if (pEVar4->max_length <= uVar19) goto code_?;
              pEVar20 = pEVar4->vector[uVar19];
              uVar5 = (POPCOUNT((uint)pEVar20 & 0xff) & 1U) == 0;
              if (pEVar20 != (ExtenderBorderInfo *)0x0) {
                if ((pEVar20->fields).Enabled != 0) goto code_?;
                pIVar1 = (this->fields).ExtenderComponent;
                uVar5 = (POPCOUNT((uint)pIVar1 & 0xff) & 1U) == 0;
                if (pIVar1 != (Image *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                            ((Behaviour *)pIVar1,0,(MethodInfo *)0x0);
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
  if (!(bool)uVar5) {
    pfVar21 = &info[1].fields.CutoffFar;
    bVar22 = *(byte *)pfVar21;
    bVar23 = (byte)((ushort)extraout_CX >> 8);
    *(byte *)pfVar21 = *(char *)pfVar21 + bVar23;
    out(this->klass,
        (short)CONCAT31((int3)((uint)extraout_EDX >> 8),
                        (char)extraout_EDX + (char)extraout_CX + CARRY1(bVar22,bVar23)));
    pcVar15 = (code *)swi(3);
    (*pcVar15)();
    return;
  }
  bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Implicit
                     ((Object_1 *)info,(MethodInfo *)0x0);
  if (bVar3 == 0) {
    return;
  }
  pTVar24 = (this->fields).MessageComponent;
  if (pTVar24 != (Text *)0x0) {
    (*(code *)(pTVar24->klass->vtable).get_text.method)();
    pTVar24 = (this->fields).MessageComponent;
    if (pTVar24 != (Text *)0x0) {
      (*(code *)(pTVar24->klass->vtable).set_text.method)();
      ChatBubble_PerformAutoSize(this,(MethodInfo *)0x0);
      pTVar24 = (this->fields).MessageComponent;
      if ((pTVar24 != (Text *)0x0) &&
         (pRVar7 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                              ((Graphic *)pTVar24,(MethodInfo *)0x0), pRVar7 != (RectTransform *)0x0
         )) {
        pRVar25 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_rect
                            ((Rect *)&stack0xffffffe4,pRVar7,(MethodInfo *)0x0);
        fVar16 = pRVar25->m_Height;
        pTVar24 = (this->fields).MessageComponent;
        (this->fields).MessageMinimumSize.x = pRVar25->m_Width;
        (this->fields).MessageMinimumSize.y = fVar16;
        if (pTVar24 != (Text *)0x0) {
          (*(code *)(pTVar24->klass->vtable).set_text.method)();
          return;
        }
      }
    }
  }
  func_?();
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
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
  uVar7 = (POPCOUNT((uint)pIVar6 & 0xff) & 1U) == 0;
  if (pIVar6 != (Image *)0x0) {
    pRVar8 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                        ((Graphic *)pIVar6,(MethodInfo *)0x0);
    uVar7 = (POPCOUNT((uint)pRVar8 & 0xff) & 1U) == 0;
    if (pRVar8 != (RectTransform *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_pivot
                (pRVar8,(Vector2)0x3f8000003f000000,(MethodInfo *)0x0);
      switch((this->fields).ExtenderDock) {
      case 0:
        pIVar6 = (this->fields).ExtenderComponent;
        uVar7 = (POPCOUNT((uint)pIVar6 & 0xff) & 1U) == 0;
        if (pIVar6 != (Image *)0x0) {
          this_00 = (Image *)UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                                       ((Graphic *)pIVar6,(MethodInfo *)0x0);
          pIVar6 = (this->fields).ExtenderComponent;
          uVar7 = (POPCOUNT((uint)pIVar6 & 0xff) & 1U) == 0;
          if (pIVar6 != (Image *)0x0) {
            pRVar8 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                                ((Graphic *)pIVar6,(MethodInfo *)0x0);
            uVar7 = (POPCOUNT((uint)pRVar8 & 0xff) & 1U) == 0;
            if (pRVar8 != (RectTransform *)0x0) {
              value.y = fVar4;
              value.x = 0.5;
              UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_anchorMax
                        (pRVar8,value,(MethodInfo *)0x0);
              uVar7 = (POPCOUNT((uint)this_00 & 0xff) & 1U) == 0;
              if (this_00 != (Image *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_anchorMin
                          ((RectTransform *)this_00,(Vector2)0x0,(MethodInfo *)0x0);
                pIVar6 = (this->fields).ExtenderComponent;
                uVar7 = (POPCOUNT((uint)pIVar6 & 0xff) & 1U) == 0;
                if (pIVar6 != (Image *)0x0) {
                  this_00 = (Image *)UnityEngine.UI.dll::UnityEngine::UI::Graphic::
                                     Graphic_get_rectTransform((Graphic *)pIVar6,(MethodInfo *)0x0);
                  fVar3 = 0.0;
code_?:
                  euler_00.y = fStack_1;
                  euler_00.x = fStack_1;
                  euler_00.z = fVar3;
                  pQVar9 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::
                            Quaternion_Internal_FromEulerRad
                                      ((Quaternion *)&fStack_1,euler_00,(MethodInfo *)0x0);
                  uVar7 = (POPCOUNT((uint)this_00 & 0xff) & 1U) == 0;
                  if (this_00 != (Image *)0x0) {
                    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
                              ((Transform *)this_00,*pQVar9,(MethodInfo *)0x0);
                    goto code_?;
                  }
                }
              }
            }
          }
        }
        break;
      case 1:
        pIVar6 = (this->fields).ExtenderComponent;
        uVar7 = (POPCOUNT((uint)pIVar6 & 0xff) & 1U) == 0;
        if (pIVar6 != (Image *)0x0) {
          this_00 = (Image *)UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                                       ((Graphic *)pIVar6,(MethodInfo *)0x0);
          pIVar6 = (this->fields).ExtenderComponent;
          uVar7 = (POPCOUNT((uint)pIVar6 & 0xff) & 1U) == 0;
          if (pIVar6 != (Image *)0x0) {
            pRVar8 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                                ((Graphic *)pIVar6,(MethodInfo *)0x0);
            uVar7 = (POPCOUNT((uint)pRVar8 & 0xff) & 1U) == 0;
            if (pRVar8 != (RectTransform *)0x0) {
              value_00.y = 0.5;
              value_00.x = fVar3;
              UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_anchorMax
                        (pRVar8,value_00,(MethodInfo *)0x0);
              uVar7 = (POPCOUNT((uint)this_00 & 0xff) & 1U) == 0;
              if (this_00 != (Image *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_anchorMin
                          ((RectTransform *)this_00,(Vector2)0x0,(MethodInfo *)0x0);
                pIVar6 = (this->fields).ExtenderComponent;
                uVar7 = (POPCOUNT((uint)pIVar6 & 0xff) & 1U) == 0;
                if (pIVar6 != (Image *)0x0) {
                  this_00 = (Image *)UnityEngine.UI.dll::UnityEngine::UI::Graphic::
                                     Graphic_get_rectTransform((Graphic *)pIVar6,(MethodInfo *)0x0);
                  fVar3 = -1.5707964;
code_?:
                  euler.y = fStack_1;
                  euler.x = fStack_1;
                  euler.z = fVar3;
                  pQVar9 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::
                            Quaternion_Internal_FromEulerRad
                                      ((Quaternion *)&fStack_1,euler,(MethodInfo *)0x0);
                  uVar7 = (POPCOUNT((uint)this_00 & 0xff) & 1U) == 0;
                  if (this_00 != (Image *)0x0) {
                    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localRotation
                              ((Transform *)this_00,*pQVar9,(MethodInfo *)0x0);
                    goto code_?;
                  }
                }
              }
            }
          }
        }
        break;
      case 2:
        pIVar6 = (this->fields).ExtenderComponent;
        uVar7 = (POPCOUNT((uint)pIVar6 & 0xff) & 1U) == 0;
        if (pIVar6 != (Image *)0x0) {
          this_00 = (Image *)UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                                       ((Graphic *)pIVar6,(MethodInfo *)0x0);
          pIVar6 = (this->fields).ExtenderComponent;
          uVar7 = (POPCOUNT((uint)pIVar6 & 0xff) & 1U) == 0;
          if (pIVar6 != (Image *)0x0) {
            pRVar8 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                                ((Graphic *)pIVar6,(MethodInfo *)0x0);
            uVar7 = (POPCOUNT((uint)pRVar8 & 0xff) & 1U) == 0;
            if (pRVar8 != (RectTransform *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_anchorMax
                        (pRVar8,(Vector2)0x3f0000003f800000,(MethodInfo *)0x0);
              uVar7 = (POPCOUNT((uint)this_00 & 0xff) & 1U) == 0;
              if (this_00 != (Image *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_anchorMin
                          ((RectTransform *)this_00,(Vector2)0x0,(MethodInfo *)0x0);
                pIVar6 = (this->fields).ExtenderComponent;
                uVar7 = (POPCOUNT((uint)pIVar6 & 0xff) & 1U) == 0;
                if (pIVar6 != (Image *)0x0) {
                  this_00 = (Image *)UnityEngine.UI.dll::UnityEngine::UI::Graphic::
                                     Graphic_get_rectTransform((Graphic *)pIVar6,(MethodInfo *)0x0);
                  fVar3 = 1.5707964;
                  goto code_?;
                }
              }
            }
          }
        }
        break;
      case 3:
        pIVar6 = (this->fields).ExtenderComponent;
        uVar7 = (POPCOUNT((uint)pIVar6 & 0xff) & 1U) == 0;
        if (pIVar6 != (Image *)0x0) {
          this_00 = (Image *)UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                                       ((Graphic *)pIVar6,(MethodInfo *)0x0);
          pIVar6 = (this->fields).ExtenderComponent;
          uVar7 = (POPCOUNT((uint)pIVar6 & 0xff) & 1U) == 0;
          if (pIVar6 != (Image *)0x0) {
            pRVar8 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                                ((Graphic *)pIVar6,(MethodInfo *)0x0);
            uVar7 = (POPCOUNT((uint)pRVar8 & 0xff) & 1U) == 0;
            if (pRVar8 != (RectTransform *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_anchorMax
                        (pRVar8,(Vector2)0x3f8000003f000000,(MethodInfo *)0x0);
              uVar7 = (POPCOUNT((uint)this_00 & 0xff) & 1U) == 0;
              if (this_00 != (Image *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_anchorMin
                          ((RectTransform *)this_00,(Vector2)0x0,(MethodInfo *)0x0);
                pIVar6 = (this->fields).ExtenderComponent;
                uVar7 = (POPCOUNT((uint)pIVar6 & 0xff) & 1U) == 0;
                if (pIVar6 != (Image *)0x0) {
                  this_00 = (Image *)UnityEngine.UI.dll::UnityEngine::UI::Graphic::
                                     Graphic_get_rectTransform((Graphic *)pIVar6,(MethodInfo *)0x0);
                  fVar3 = 3.1415927;
                  goto code_?;
                }
              }
            }
          }
        }
        break;
      default:
code_?:
        pIVar6 = (this->fields).ExtenderComponent;
        uVar7 = (POPCOUNT((uint)pIVar6 & 0xff) & 1U) == 0;
        if (pIVar6 != (Image *)0x0) {
          bVar5 = UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_get_enabled
                             ((Behaviour *)pIVar6,(MethodInfo *)0x0);
          if (bVar5 == 0) {
code_?:
            pIVar6 = (this->fields).ExtenderComponent;
            uVar7 = (POPCOUNT((uint)pIVar6 & 0xff) & 1U) == 0;
            if (pIVar6 != (Image *)0x0) {
              bVar5 = UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_get_enabled
                                 ((Behaviour *)pIVar6,(MethodInfo *)0x0);
              if (bVar5 != 0) {
                return;
              }
              pEVar10 = (this->fields).ExtenderBorderInfo;
              uVar7 = (POPCOUNT((uint)pEVar10 & 0xff) & 1U) == 0;
              if (pEVar10 != (ExtenderBorderInfo__Array *)0x0) {
                uVar11 = (this->fields).ExtenderDock;
                uVar7 = (POPCOUNT(uVar11 - pEVar10->max_length & 0xff) & 1U) == 0;
                if (pEVar10->max_length <= uVar11) goto code_?;
                pEVar12 = pEVar10->vector[uVar11];
                uVar7 = (POPCOUNT((uint)pEVar12 & 0xff) & 1U) == 0;
                if (pEVar12 != (ExtenderBorderInfo *)0x0) {
                  if ((pEVar12->fields).Enabled == 0) {
                    return;
                  }
                  pIVar6 = (this->fields).ExtenderComponent;
                  uVar7 = (POPCOUNT((uint)pIVar6 & 0xff) & 1U) == 0;
                  if (pIVar6 != (Image *)0x0) {
                    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                              ((Behaviour *)pIVar6,1,(MethodInfo *)0x0);
                    return;
                  }
                }
              }
            }
          }
          else {
            pEVar10 = (this->fields).ExtenderBorderInfo;
            uVar7 = (POPCOUNT((uint)pEVar10 & 0xff) & 1U) == 0;
            if (pEVar10 != (ExtenderBorderInfo__Array *)0x0) {
              uVar11 = (this->fields).ExtenderDock;
              uVar7 = (POPCOUNT(uVar11 - pEVar10->max_length & 0xff) & 1U) == 0;
              if (pEVar10->max_length <= uVar11) goto code_?;
              pEVar12 = pEVar10->vector[uVar11];
              uVar7 = (POPCOUNT((uint)pEVar12 & 0xff) & 1U) == 0;
              if (pEVar12 != (ExtenderBorderInfo *)0x0) {
                if ((pEVar12->fields).Enabled != 0) goto code_?;
                pIVar6 = (this->fields).ExtenderComponent;
                uVar7 = (POPCOUNT((uint)pIVar6 & 0xff) & 1U) == 0;
                if (pIVar6 != (Image *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                            ((Behaviour *)pIVar6,0,(MethodInfo *)0x0);
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
  if (!(bool)uVar7) {
    pfVar13 = &(this_00->fields)._._.m_RaycastPadding.w;
    bVar14 = *(byte *)pfVar13;
    bVar15 = (byte)((ushort)extraout_CX >> 8);
    *(byte *)pfVar13 = *(char *)pfVar13 + bVar15;
    out(this->klass,
        (short)CONCAT31((int3)((uint)extraout_EDX >> 8),
                        (char)extraout_EDX + (char)extraout_CX + CARRY1(bVar14,bVar15)));
    pcVar16 = (code *)swi(3);
    (*pcVar16)();
    return;
  }
  bVar5 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Implicit
                     ((Object_1 *)this_00,(MethodInfo *)0x0);
  if (bVar5 == 0) {
    return;
  }
  pTVar17 = (this->fields).MessageComponent;
  if (pTVar17 != (Text *)0x0) {
    pTVar18 = pTVar17->klass;
    pIStack19 = (pTVar18->vtable).set_text.methodPtr;
    (*(code *)(pTVar18->vtable).get_text.method)();
    pTVar17 = (this->fields).MessageComponent;
    if (pTVar17 != (Text *)0x0) {
      pTVar18 = pTVar17->klass;
      pIStack19 = (pTVar18->vtable).CalculateLayoutInputHorizontal_1.methodPtr;
      (*(code *)(pTVar18->vtable).set_text.method)();
      ChatBubble_PerformAutoSize(this,(MethodInfo *)0x0);
      pTVar17 = (this->fields).MessageComponent;
      if ((pTVar17 != (Text *)0x0) &&
         (pRVar8 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                              ((Graphic *)pTVar17,(MethodInfo *)0x0), pRVar8 != (RectTransform *)0x0
         )) {
        pRVar20 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_rect
                            ((Rect *)&stack0xffffffd8,pRVar8,(MethodInfo *)0x0);
        fVar3 = pRVar20->m_Height;
        pTVar17 = (this->fields).MessageComponent;
        (this->fields).MessageMinimumSize.x = pRVar20->m_Width;
        (this->fields).MessageMinimumSize.y = fVar3;
        if (pTVar17 != (Text *)0x0) {
          pTVar18 = pTVar17->klass;
          pIStack19 = (pTVar18->vtable).CalculateLayoutInputHorizontal_1.methodPtr;
          (*(code *)(pTVar18->vtable).set_text.method)();
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


/* WARNING: Instruction at (ram,0xADDR) overlaps instruction at (ram,0xADDR)
    */
/* Void SetExtenderAnchorPosToBorder(ExtenderBorderInfo) */

void Assembly-CSharp.dll::ChatBubble::ChatBubble_SetExtenderAnchorPosToBorder
               (ChatBubble *this,ExtenderBorderInfo *info,MethodInfo *method)

{
  switch((this->fields).ExtenderDock) {
  case 0:
    pIVar1 = (this->fields).ExtenderComponent;
    if (pIVar1 != (Image *)0x0) {
      unaff_EDI = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                            ((Graphic *)pIVar1,(MethodInfo *)0x0);
      pIVar1 = (this->fields).ExtenderComponent;
      if ((pIVar1 != (Image *)0x0) &&
         (pRVar2 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                              ((Graphic *)pIVar1,(MethodInfo *)0x0), pRVar2 != (RectTransform *)0x0
         )) {
        UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_anchoredPosition
                  (pRVar2,(MethodInfo *)0x0);
joined_?:
        pRVar2 = unaff_EDI;
        if (info != (ExtenderBorderInfo *)0x0) {
code_?:
          unaff_EDI = (RectTransform *)0x0;
          if (pRVar2 != (RectTransform *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
            RectTransform_set_anchoredPosition(pRVar2,(Vector2)0x0,(MethodInfo *)0x0);
code_?:
            return;
          }
        }
      }
    }
    break;
  case 1:
    pIVar1 = (this->fields).ExtenderComponent;
    if (pIVar1 != (Image *)0x0) {
      unaff_EDI = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                            ((Graphic *)pIVar1,(MethodInfo *)0x0);
      if (info != (ExtenderBorderInfo *)0x0) {
        pCVar3 = (ChatBubble *)(info->fields).Margin;
        pIVar1 = (this->fields).ExtenderComponent;
        this = pCVar3;
        if ((pIVar1 != (Image *)0x0) &&
           (pRVar2 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                                ((Graphic *)pIVar1,(MethodInfo *)0x0),
           pRVar2 != (RectTransform *)0x0)) {
          UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_anchoredPosition
                    (pRVar2,(MethodInfo *)0x0);
          pRVar2 = unaff_EDI;
          goto code_?;
        }
      }
    }
    break;
  case 2:
    pIVar1 = (this->fields).ExtenderComponent;
    if (pIVar1 != (Image *)0x0) {
      unaff_EDI = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                            ((Graphic *)pIVar1,(MethodInfo *)0x0);
      if (info != (ExtenderBorderInfo *)0x0) {
        pCVar3 = (ChatBubble *)(info->fields).Margin;
        pIVar1 = (this->fields).ExtenderComponent;
        this = pCVar3;
        if ((pIVar1 != (Image *)0x0) &&
           (pRVar2 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                                ((Graphic *)pIVar1,(MethodInfo *)0x0),
           pRVar2 != (RectTransform *)0x0)) {
          UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_anchoredPosition
                    (pRVar2,(MethodInfo *)0x0);
          pRVar2 = unaff_EDI;
          goto code_?;
        }
      }
    }
    break;
  case 3:
    pIVar1 = (this->fields).ExtenderComponent;
    if (pIVar1 != (Image *)0x0) {
      unaff_EDI = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                            ((Graphic *)pIVar1,(MethodInfo *)0x0);
      pIVar1 = (this->fields).ExtenderComponent;
      if ((pIVar1 != (Image *)0x0) &&
         (pRVar2 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                              ((Graphic *)pIVar1,(MethodInfo *)0x0), pRVar2 != (RectTransform *)0x0
         )) {
        UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_anchoredPosition
                  (pRVar2,(MethodInfo *)0x0);
        goto joined_?;
      }
    }
    break;
  default:
    goto code_?;
  }
  cVar4 = '\0';
  uVar5 = 0;
  uVar6 = func_?();
  pcVar7 = (code *)swi(4);
  iVar8 = extraout_ECX;
  Var22 = extraout_ST0;
  if (cVar4 == '\x01') {
    uVar6 = (*pcVar7)();
    iVar8 = extraout_ECX_00;
    Var22 = extraout_ST0_00;
  }
  if ((bool)uVar5) {
    bVar9 = *(byte *)&unaff_EDI->klass;
    bVar10 = (byte)((uint)iVar8 >> 8);
    bVar11 = *(char *)&unaff_EDI->klass + bVar10;
    *(byte *)&unaff_EDI->klass = bVar11 + uVar5;
    if (*(char *)&unaff_EDI->klass == '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    pcVar12 = (char *)(iVar8 + 0x17103474);
    *pcVar12 = *pcVar12 + (char)((ulonglong)uVar6 >> 8) +
              (CARRY1(bVar9,bVar10) || CARRY1(bVar11,uVar5));
    if (*pcVar12 == '\0') {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    piVar13 = (int *)((int)uVar6 + 0xADDR);
    puVar14 = (uint *)((int)uVar6 + -0x335ef80a);
    uVar15 = *puVar14;
    *puVar14 = *puVar14 + (int)piVar13;
    *piVar13 = (int)piVar13 + (uint)CARRY4(uVar15,(uint)piVar13) + *piVar13;
    bVar16 = *piVar13 == 0;
  }
  else {
    Var22 = to_bcd(Var22);
    *(unkbyte10 *)((int)((ulonglong)uVar6 >> 0x20) + -0x3c7217ef) = Var22;
    in(0xff);
    uRam_? = 1;
    bVar16 = cRam_? == '\0';
  }
  if (bVar16) {
    func_?();
    cRam_? = '\x01';
  }
  pMVar17 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (((pMVar17 != (MVGameControllerBase *)0x0) &&
      (pMVar18 = (pMVar17->fields).game, pMVar18 != (MVNetworkGame *)0x0)) &&
     (pMVar19 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar18,(MethodInfo *)0x0),
     pMVar19 != (MVLocalPlayer *)0x0)) {
    bVar20 = MVPlayer::MVPlayer_get_IsReady((MVPlayer *)pMVar19,(MethodInfo *)0x0);
    if (bVar20 != 0) {
      pCVar21 = (this->fields).anchor;
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      bVar20 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                         ((Object_1 *)pCVar21,(Object_1 *)0x0,(MethodInfo *)0x0);
      if (bVar20 == 0) {
        pCVar21 = (this->fields).anchor;
        if ((pCVar21 != (ChatAnchor *)0x0) &&
           (this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                ((Component *)pCVar21,(MethodInfo *)0x0), this_01 != (Transform *)0x0
           )) {
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                    ((Vector3 *)&stack0xffffffe0,this_01,(MethodInfo *)0x0);
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          pMVar17 = TypeInfo__MVGameControllerBase->static_fields->instance;
          if (((pMVar17 != (MVGameControllerBase *)0x0) &&
              (pMVar18 = (pMVar17->fields).game, pMVar18 != (MVNetworkGame *)0x0)) &&
             ((pMVar19 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar18,(MethodInfo *)0x0),
              pMVar19 != (MVLocalPlayer *)0x0 &&
              (pSVar22 = (pMVar19->fields).spawnRoleDataMediator,
              pSVar22 != (SpawnRoleDataMediator *)0x0)))) {
            Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
            SpawnRoleVariable`1[UnityEngine::Vector3]::
            SpawnRoleVariable_1_UnityEngine_Vector3__op_Implicit
                      ((Vector3 *)&stack0xffffffd4,
                       (SpawnRoleVariable_1_UnityEngine_Vector3_ *)(pSVar22->fields).position,
                       MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<UnityEngine::Vector3>__op_Implicit_MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<UnityEngine::Vector3>_
                      );
            fVar23 = (float10)func_?();
            if ((float)fVar23 <= _UNK_?) {
              return;
            }
            this_00 = (this->fields).CanvasGroup;
            if (this_00 != (CanvasGroup *)0x0) {
              UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                        (this_00,(_UNK_? - (float)fVar23) / _UNK_?,(MethodInfo *)0x0);
              return;
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
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
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

