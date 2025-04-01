
/* Void Awake() */

void Assembly-CSharp.dll::ChatBubble::ChatBubble_Awake(ChatBubble *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__ExtenderBorderInfo);
    func_?(&TypeInfo__ExtenderBorderInfo);
    cRam_? = '\x01';
  }
  ppEVar1 = &(this->fields).ExtenderBorderInfo;
  if (*ppEVar1 != (ExtenderBorderInfo__Array *)0x0) {
    return;
  }
  method_00 = (ExtenderBorderInfo__Array *)func_?(TypeInfo__ExtenderBorderInfo,4);
  *ppEVar1 = method_00;
  func_?(ppEVar1);
  pEVar2 = *ppEVar1;
  method_01 = TypeInfo__ExtenderBorderInfo;
  pEVar3 = (ExtenderBorderInfo *)func_?();
  (pEVar3->fields).Enabled = 1;
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)pEVar3,ExceptionArgument__Enum_obj,(MethodInfo *)method_01);
  (pEVar3->fields).Border = 0;
  if (pEVar2 == (ExtenderBorderInfo__Array *)0x0) {
code_?:
    func_?();
code_?:
    uVar4 = func_?(0);
    func_?(uVar4);
code_?:
    uVar4 = func_?(0);
    func_?(uVar4);
code_?:
    uVar4 = func_?(0);
    func_?(uVar4);
  }
  else {
    iVar5 = func_?(pEVar3,(pEVar2->klass->_0).element_class);
    if (iVar5 == 0) goto code_?;
    if (pEVar2->max_length == 0) goto code_?;
    pEVar2->vector[0] = pEVar3;
    func_?(pEVar2->vector,pEVar3);
    pEVar2 = *ppEVar1;
    pEVar3 = (ExtenderBorderInfo *)func_?(TypeInfo__ExtenderBorderInfo);
    (pEVar3->fields).Enabled = 1;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)pEVar3,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
    (pEVar3->fields).Border = 1;
    if (pEVar2 == (ExtenderBorderInfo__Array *)0x0) goto code_?;
    iVar5 = func_?(pEVar3,(pEVar2->klass->_0).element_class);
    if (iVar5 == 0) goto code_?;
    if (pEVar2->max_length < 2) goto code_?;
    pEVar2->vector[1] = pEVar3;
    func_?(pEVar2->vector + 1,pEVar3);
    pEVar2 = *ppEVar1;
    pEVar3 = (ExtenderBorderInfo *)func_?(TypeInfo__ExtenderBorderInfo);
    (pEVar3->fields).Enabled = 1;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)pEVar3,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
    (pEVar3->fields).Border = 2;
    if (pEVar2 == (ExtenderBorderInfo__Array *)0x0) goto code_?;
    iVar5 = func_?(pEVar3,(pEVar2->klass->_0).element_class);
    if (iVar5 == 0) goto code_?;
    if (pEVar2->max_length < 3) goto code_?;
    pEVar2->vector[2] = pEVar3;
    func_?(pEVar2->vector + 2,pEVar3);
    pEVar2 = *ppEVar1;
    pEVar3 = (ExtenderBorderInfo *)func_?(TypeInfo__ExtenderBorderInfo);
    (pEVar3->fields).Enabled = 1;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)pEVar3,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
    (pEVar3->fields).Border = 3;
    if (pEVar2 == (ExtenderBorderInfo__Array *)0x0) goto code_?;
    iVar5 = func_?(pEVar3,(pEVar2->klass->_0).element_class);
    if (iVar5 != 0) {
      if (3 < pEVar2->max_length) {
        pEVar2->vector[3] = pEVar3;
        func_?(pEVar2->vector + 3,pEVar3);
        return;
      }
      goto code_?;
    }
  }
  uVar4 = func_?(0);
  func_?(uVar4);
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
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
            fVar9 = (float)uVar4 - (3.5524762e-29 - (float)uVar7);
            fVar10 = SUB84(uVar4,4) - (3.552483e-29 - (float)uVar8);
            fVar5 = fVar5 - ((float)puVar6 - pVVar3->z);
            pCVar11 = (Camera *)(fVar10 * fVar10 + fVar9 * fVar9 + fVar5 * fVar5);
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
                fVar9 = (float)uVar13 - ((float)uVar14 + 3.5524762e-29);
                fVar10 = SUB84(uVar13,4) - ((float)uVar15 + 3.552483e-29);
                fVar5 = fVar5 - ((float)puVar6 + pVVar3->z);
                pCVar2 = (this->fields).anchor;
                fVar5 = fVar10 * fVar10 + fVar9 * fVar9 + fVar5 * fVar5;
                if ((pCVar2 != (ChatAnchor *)0x0) &&
                   (pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                              Component_get_transform((Component *)pCVar2,(MethodInfo *)0x0),
                   pTVar1 != (Transform *)0x0)) {
                  pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                            Transform_get_position
                                      ((Vector3 *)&stack0xffffffc8,pTVar1,(MethodInfo *)0x0);
                  uVar16._0_4_ = pVVar3->x;
                  uVar16._4_4_ = pVVar3->y;
                  fVar9 = pVVar3->z;
                  pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                            Component_get_transform((Component *)this_00,(MethodInfo *)0x0);
                  if (pTVar1 != (Transform *)0x0) {
                    pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                              Transform_get_right((Vector3 *)&stack0xffffffc8,pTVar1,
                                                  (MethodInfo *)0x0);
                    uVar17 = pVVar3->x;
                    uVar18 = pVVar3->y;
                    fVar10 = (float)uVar16 - (3.5524762e-29 - (float)uVar17);
                    fVar19 = SUB84(uVar16,4) - (3.552483e-29 - (float)uVar18);
                    fVar9 = fVar9 - ((float)puVar6 - pVVar3->z);
                    fVar10 = fVar19 * fVar19 + fVar10 * fVar10 + fVar9 * fVar9;
                    fVar9 = fVar5;
                    if (fVar10 <= fVar5) {
                      fVar9 = fVar10;
                    }
                    iVar20 = (this->fields).ExtenderDock;
                    if (fVar9 < (float)camera) {
                      iVar12 = (fVar5 < fVar10) + 1;
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
  if (value == (String *)0x0) goto code_?;
  if (0x82 < (value->fields)._stringLength) {
    pSVar1 = mscorlib.dll::System::String::String_Substring_1(value,0,0x82,(MethodInfo *)0x0);
    value = mscorlib.dll::System::String::String_Concat_3
                      (pSVar1,::StringLiteral____,(MethodInfo *)0x0);
  }
  ppSVar2 = &(this->fields).MessageValue;
  *ppSVar2 = value;
  func_?();
  pTVar3 = (this->fields).MessageComponent;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar4 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Implicit
                    ((Object_1 *)pTVar3,(MethodInfo *)0x0);
  if (bVar4 == 0) {
    return 0;
  }
  pTVar3 = (this->fields).MessageComponent;
  if (pTVar3 == (Text *)0x0) goto code_?;
  pSVar1 = (String *)
           (*(code *)(pTVar3->klass->vtable).get_text.method)
                     (pTVar3,(pTVar3->klass->vtable).set_text.methodPtr);
  bVar4 = mscorlib.dll::System::String::String_op_Inequality(pSVar1,value,(MethodInfo *)0x0);
  if (bVar4 == 0) {
    fVar5 = (this->fields).timeUntilFade;
    fVar6 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    if (fVar5 < fVar6) goto code_?;
  }
  else {
code_?:
    pAVar7 = (this->fields).PopUpSound;
    if (pAVar7 == (AudioSource *)0x0) goto code_?;
    bVar4 = UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_get_isActiveAndEnabled
                      ((Behaviour *)pAVar7,(MethodInfo *)0x0);
    if (bVar4 != 0) {
      pAVar7 = (this->fields).PopUpSound;
      if (pAVar7 == (AudioSource *)0x0) goto code_?;
      UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_Play_1
                (pAVar7,(MethodInfo *)0x0);
    }
  }
  pTVar3 = (this->fields).MessageComponent;
  if (pTVar3 != (Text *)0x0) {
    (*(code *)(pTVar3->klass->vtable).set_text.method)
              (pTVar3,value,(pTVar3->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
    if ((this->fields).AutoSize != 0) {
      ChatBubble_PerformAutoSize(this,(MethodInfo *)0x0);
    }
    this_00 = (this->fields).CanvasGroup;
    (this->fields).currentFade = 1.0;
    if (this_00 != (CanvasGroup *)0x0) {
      UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                (this_00,1.0,(MethodInfo *)0x0);
      fVar5 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
      pSVar1 = *ppSVar2;
      if (pSVar1 != (String *)0x0) {
        fVar5 = (float)(pSVar1->fields)._stringLength / _UNK_? + fVar5 + _UNK_?;
        pfVar8 = &(this->fields).timeUntilFade;
        if (*pfVar8 <= fVar5 && fVar5 != *pfVar8) {
          (this->fields).timeUntilFade = fVar5;
        }
        pCVar9 = (this->fields).anchor;
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__UnityEngine__Object);
        }
        bVar4 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                          ((Object_1 *)pCVar9,(Object_1 *)0x0,(MethodInfo *)0x0);
        if (bVar4 == 0) {
          return 1;
        }
        pCVar9 = (this->fields).anchor;
        if (pCVar9 != (ChatAnchor *)0x0) {
          (pCVar9->fields).snapTracking = 1;
          pCVar9 = (this->fields).anchor;
          if (pCVar9 != (ChatAnchor *)0x0) {
            ChatAnchor::ChatAnchor_UpdateAttachedBubblePosition(pCVar9,(MethodInfo *)0x0);
            return 1;
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar10 = (code *)swi(3);
  bVar4 = (*pcVar10)();
  return bVar4;
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
                       (fVar5 - 3.5530507e-29) + pRVar3->m_Height,(MethodInfo *)0x0);
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
        if (fVar4 == 3.5531397e-29) {
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
                       ((float)&stack0xffffffd4 - 3.5531397e-29) + pRVar7->m_Width,(MethodInfo *)0x0
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
                       (fVar5 - 3.5532393e-29) + pRVar3->m_Width,(MethodInfo *)0x0);
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


/* Void PerformExtenderPosition() */

void Assembly-CSharp.dll::ChatBubble::ChatBubble_PerformExtenderPosition
               (ChatBubble *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  exists = (this->fields).ExtenderComponent;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Implicit
                    ((Object_1 *)exists,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    return;
  }
  this_00 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_main((MethodInfo *)0x0);
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)this_00,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar1 == 0) {
code_?:
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    pEVar2 = (this->fields).ExtenderBorderInfo;
    if (pEVar2 != (ExtenderBorderInfo__Array *)0x0) {
      uVar3 = (this->fields).ExtenderDock;
      if (pEVar2->max_length <= uVar3) goto code_?;
      info = pEVar2->vector[uVar3];
      pTVar4 = (Transform *)ChatBubble_get_rectTransform(this,(MethodInfo *)0x0);
      if (pTVar4 != (Transform *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                  ((Vector3 *)&stack0xffffffe4,pTVar4,(MethodInfo *)0x0);
        this_01 = ChatBubble_get_rectTransform(this,(MethodInfo *)0x0);
        if ((this_01 != (RectTransform *)0x0) &&
           (UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_sizeDelta
                      (this_01,(MethodInfo *)0x0), info != (ExtenderBorderInfo *)0x0)) {
          ChatBubble_SetExtenderAnchorPosToBorder(this,info,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  else {
    pCVar5 = (this->fields).anchor;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                      ((Object_1 *)pCVar5,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar1 == 0) goto code_?;
    pCVar5 = (this->fields).anchor;
    if (((pCVar5 != (ChatAnchor *)0x0) &&
        (pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            ((Component *)pCVar5,(MethodInfo *)0x0), pTVar4 != (Transform *)0x0)) &&
       (pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                           ((Vector3 *)&stack0xfffffff0,pTVar4,(MethodInfo *)0x0),
       this_00 != (Camera *)0x0)) {
      pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_WorldToViewportPoint_1
                         ((Vector3 *)&stack0xffffffe4,this_00,*pVVar6,(MethodInfo *)0x0);
      uVar7 = pVVar6->x;
      uVar8 = pVVar6->y;
      if (((pVVar6->z <= 0.0) || ((float)uVar7 <= 0.0)) ||
         ((_UNK_? <= (float)uVar7 ||
          (((float)uVar8 <= 0.0 || (_UNK_? <= (float)uVar8)))))) {
        ChatBubble_BindExtenderToClosestBorder(this,this_00,(MethodInfo *)0x0);
      }
      else {
        ChatBubble_BindExtenderDock(this,ExtenderBorderEnum__Enum_Bottom,(MethodInfo *)0x0);
      }
      goto code_?;
    }
  }
  func_?();
code_?:
  func_?();
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


/* Void PerformExtenderSnap() */

void Assembly-CSharp.dll::ChatBubble::ChatBubble_PerformExtenderSnap
               (ChatBubble *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  pIVar1 = (this->fields).ExtenderComponent;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Implicit
                    ((Object_1 *)pIVar1,(MethodInfo *)0x0);
  if (bVar2 == 0) {
    return;
  }
  pIVar1 = (this->fields).ExtenderComponent;
  if ((pIVar1 != (Image *)0x0) &&
     (pRVar3 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                         ((Graphic *)pIVar1,(MethodInfo *)0x0), pRVar3 != (RectTransform *)0x0)) {
    UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_pivot
              (pRVar3,(Vector2)0x3f8000003f000000,(MethodInfo *)0x0);
    switch((this->fields).ExtenderDock) {
    case 0:
      pIVar1 = (this->fields).ExtenderComponent;
      if (pIVar1 != (Image *)0x0) {
        pRVar3 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                           ((Graphic *)pIVar1,(MethodInfo *)0x0);
        pIVar1 = (this->fields).ExtenderComponent;
        if (pIVar1 != (Image *)0x0) {
          pRVar4 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                             ((Graphic *)pIVar1,(MethodInfo *)0x0);
          fStack_5 = 0.0;
          puStack_6 = (undefined *)0x0;
          if ((pRVar4 != (RectTransform *)0x0) &&
             (UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_anchorMax
                        (pRVar4,(Vector2)0x3f000000,(MethodInfo *)0x0),
             pRVar3 != (RectTransform *)0x0)) {
            UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_anchorMin
                      (pRVar3,(Vector2)0x0,(MethodInfo *)0x0);
            pIVar1 = (this->fields).ExtenderComponent;
            if (pIVar1 != (Image *)0x0) {
              pTVar7 = (Transform *)
                       UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                                 ((Graphic *)pIVar1,(MethodInfo *)0x0);
              fVar8 = 0.0;
              fVar9 = fStack_5;
              goto code_?;
            }
          }
        }
      }
      break;
    case 1:
      pIVar1 = (this->fields).ExtenderComponent;
      if (pIVar1 != (Image *)0x0) {
        pRVar3 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                           ((Graphic *)pIVar1,(MethodInfo *)0x0);
        pIVar1 = (this->fields).ExtenderComponent;
        if (pIVar1 != (Image *)0x0) {
          pRVar4 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                             ((Graphic *)pIVar1,(MethodInfo *)0x0);
          fStack_5 = 0.0;
          puStack_6 = (undefined *)0x0;
          if ((pRVar4 != (RectTransform *)0x0) &&
             (UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_anchorMax
                        (pRVar4,(Vector2)0x3f00000000000000,(MethodInfo *)0x0),
             pRVar3 != (RectTransform *)0x0)) {
            UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_anchorMin
                      (pRVar3,(Vector2)0x0,(MethodInfo *)0x0);
            pIVar1 = (this->fields).ExtenderComponent;
            if (pIVar1 != (Image *)0x0) {
              pTVar7 = (Transform *)
                       UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                                 ((Graphic *)pIVar1,(MethodInfo *)0x0);
              fVar8 = -1.5707964;
              fVar9 = fStack_5;
              goto code_?;
            }
          }
        }
      }
      break;
    case 2:
      pIVar1 = (this->fields).ExtenderComponent;
      if (pIVar1 != (Image *)0x0) {
        pRVar3 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                           ((Graphic *)pIVar1,(MethodInfo *)0x0);
        pIVar1 = (this->fields).ExtenderComponent;
        if (((pIVar1 != (Image *)0x0) &&
            (pRVar4 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                                ((Graphic *)pIVar1,(MethodInfo *)0x0),
            pRVar4 != (RectTransform *)0x0)) &&
           (UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_anchorMax
                      (pRVar4,(Vector2)0x3f0000003f800000,(MethodInfo *)0x0),
           pRVar3 != (RectTransform *)0x0)) {
          UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_anchorMin
                    (pRVar3,(Vector2)0x0,(MethodInfo *)0x0);
          pIVar1 = (this->fields).ExtenderComponent;
          if (pIVar1 != (Image *)0x0) {
            pTVar7 = (Transform *)
                     UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                               ((Graphic *)pIVar1,(MethodInfo *)0x0);
            fVar8 = 1.5707964;
            fVar9 = 0.0;
code_?:
            euler.y = fVar9;
            euler.x = fVar9;
            euler.z = fVar8;
            pQVar10 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::
                     Quaternion_Internal_FromEulerRad
                               ((Quaternion *)&fStack_5,euler,(MethodInfo *)0x0);
            if (pTVar7 != (Transform *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localRotation
                        (pTVar7,*pQVar10,(MethodInfo *)0x0);
              goto code_?;
            }
          }
        }
      }
      break;
    case 3:
      pIVar1 = (this->fields).ExtenderComponent;
      if (pIVar1 != (Image *)0x0) {
        pRVar3 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                           ((Graphic *)pIVar1,(MethodInfo *)0x0);
        pIVar1 = (this->fields).ExtenderComponent;
        if (((pIVar1 != (Image *)0x0) &&
            (pRVar4 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                                ((Graphic *)pIVar1,(MethodInfo *)0x0),
            pRVar4 != (RectTransform *)0x0)) &&
           (UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_anchorMax
                      (pRVar4,(Vector2)0x3f8000003f000000,(MethodInfo *)0x0),
           pRVar3 != (RectTransform *)0x0)) {
          UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_anchorMin
                    (pRVar3,(Vector2)0x0,(MethodInfo *)0x0);
          pIVar1 = (this->fields).ExtenderComponent;
          if (pIVar1 != (Image *)0x0) {
            pTVar7 = (Transform *)
                     UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                               ((Graphic *)pIVar1,(MethodInfo *)0x0);
            fVar8 = 3.1415927;
            fVar9 = 0.0;
code_?:
            euler_00.y = fVar9;
            euler_00.x = fVar9;
            euler_00.z = fVar8;
            pQVar10 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::
                     Quaternion_Internal_FromEulerRad
                               ((Quaternion *)&fStack_5,euler_00,(MethodInfo *)0x0);
            if (pTVar7 != (Transform *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
                        (pTVar7,*pQVar10,(MethodInfo *)0x0);
              goto code_?;
            }
          }
        }
      }
      break;
    default:
code_?:
      pIVar1 = (this->fields).ExtenderComponent;
      if (pIVar1 != (Image *)0x0) {
        bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_get_enabled
                          ((Behaviour *)pIVar1,(MethodInfo *)0x0);
        if (bVar2 == 0) {
code_?:
          pIVar1 = (this->fields).ExtenderComponent;
          if (pIVar1 != (Image *)0x0) {
            bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_get_enabled
                              ((Behaviour *)pIVar1,(MethodInfo *)0x0);
            if (bVar2 != 0) {
              return;
            }
            pEVar11 = (this->fields).ExtenderBorderInfo;
            if (pEVar11 != (ExtenderBorderInfo__Array *)0x0) {
              uVar12 = (this->fields).ExtenderDock;
              if (pEVar11->max_length <= uVar12) goto code_?;
              if (pEVar11->vector[uVar12] != (ExtenderBorderInfo *)0x0) {
                if ((pEVar11->vector[uVar12]->fields).Enabled == 0) {
                  return;
                }
                pIVar1 = (this->fields).ExtenderComponent;
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
          pEVar11 = (this->fields).ExtenderBorderInfo;
          if (pEVar11 != (ExtenderBorderInfo__Array *)0x0) {
            uVar12 = (this->fields).ExtenderDock;
            if (pEVar11->max_length <= uVar12) goto code_?;
            if (pEVar11->vector[uVar12] != (ExtenderBorderInfo *)0x0) {
              if ((pEVar11->vector[uVar12]->fields).Enabled != 0) goto code_?;
              pIVar1 = (this->fields).ExtenderComponent;
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
  func_?();
code_?:
  func_?();
  iVar13 = in((short)extraout_EDX);
  bVar14 = (byte)((uint)extraout_EDX >> 8);
  *(byte *)(iVar13 + extraout_EDX) = *(byte *)(iVar13 + extraout_EDX) ^ bVar14;
  iVar13 = in((short)extraout_EDX);
  *(byte *)(iVar13 + extraout_EDX) = *(byte *)(iVar13 + extraout_EDX) ^ bVar14;
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
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
  cVar3 = func_?();
  out(*(undefined1 *)&this->klass,extraout_DX);
  *(char *)(extraout_ECX + 0x35) = *(char *)(extraout_ECX + 0x35) + cVar3;
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
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
  ppRVar2 = &(this->fields)._rectTransform;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Implicit
                    ((Object_1 *)pRVar1,(MethodInfo *)0x0);
  if (bVar3 == 0) {
    pRVar1 = (RectTransform *)
             UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                       ((Component *)this,
                        UnityEngine__RectTransform_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::RectTransform>__
                       );
    *ppRVar2 = pRVar1;
    func_?(ppRVar2,pRVar1);
  }
  return *ppRVar2;
}

