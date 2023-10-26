
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
  pEVar1 = (ExtenderBorderInfo__Array *)func_?(TypeInfo__ExtenderBorderInfo,4);
  (this->fields).ExtenderBorderInfo = pEVar1;
  func_?(&(this->fields).ExtenderBorderInfo,pEVar1);
  pEVar1 = (this->fields).ExtenderBorderInfo;
  pEVar2 = (ExtenderBorderInfo *)func_?(TypeInfo__ExtenderBorderInfo);
  if (pEVar2 == (ExtenderBorderInfo *)0x0) {
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
    (pEVar2->fields).Enabled = 1;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              ((Object *)pEVar2,ExceptionArgument__Enum_obj,unaff_ESI);
    (pEVar2->fields).Border = 0;
    if (pEVar1 == (ExtenderBorderInfo__Array *)0x0) goto code_?;
    iVar4 = func_?(pEVar2,(pEVar1->klass->_0).element_class);
    if (iVar4 == 0) goto code_?;
    if (pEVar1->max_length == 0) goto code_?;
    pMVar5 = (MethodInfo *)pEVar1->vector;
    pEVar1->vector[0] = pEVar2;
    func_?(pMVar5,pEVar2);
    pEVar1 = (this->fields).ExtenderBorderInfo;
    pEVar2 = (ExtenderBorderInfo *)func_?(TypeInfo__ExtenderBorderInfo);
    if (pEVar2 == (ExtenderBorderInfo *)0x0) goto code_?;
    (pEVar2->fields).Enabled = 1;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              ((Object *)pEVar2,ExceptionArgument__Enum_obj,pMVar5);
    (pEVar2->fields).Border = 1;
    if (pEVar1 == (ExtenderBorderInfo__Array *)0x0) goto code_?;
    iVar4 = func_?(pEVar2,(pEVar1->klass->_0).element_class);
    if (iVar4 == 0) goto code_?;
    if (pEVar1->max_length < 2) goto code_?;
    pMVar5 = (MethodInfo *)(pEVar1->vector + 1);
    pEVar1->vector[1] = pEVar2;
    func_?(pMVar5,pEVar2);
    pEVar1 = (this->fields).ExtenderBorderInfo;
    pEVar2 = (ExtenderBorderInfo *)func_?(TypeInfo__ExtenderBorderInfo);
    if (pEVar2 == (ExtenderBorderInfo *)0x0) goto code_?;
    (pEVar2->fields).Enabled = 1;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              ((Object *)pEVar2,ExceptionArgument__Enum_obj,pMVar5);
    (pEVar2->fields).Border = 2;
    if (pEVar1 == (ExtenderBorderInfo__Array *)0x0) goto code_?;
    iVar4 = func_?(pEVar2,(pEVar1->klass->_0).element_class);
    if (iVar4 == 0) goto code_?;
    if (pEVar1->max_length < 3) goto code_?;
    pMVar5 = (MethodInfo *)(pEVar1->vector + 2);
    pEVar1->vector[2] = pEVar2;
    func_?(pMVar5,pEVar2);
    pEVar1 = (this->fields).ExtenderBorderInfo;
    pEVar2 = (ExtenderBorderInfo *)func_?(TypeInfo__ExtenderBorderInfo);
    if (pEVar2 == (ExtenderBorderInfo *)0x0) goto code_?;
    (pEVar2->fields).Enabled = 1;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              ((Object *)pEVar2,ExceptionArgument__Enum_obj,pMVar5);
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
            fVar9 = (float)uVar4 - (3.3981225e-29 - (float)uVar7);
            fVar10 = SUB84(uVar4,4) - (3.3981295e-29 - (float)uVar8);
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
                fVar9 = (float)uVar13 - ((float)uVar14 + 3.3981225e-29);
                fVar10 = SUB84(uVar13,4) - ((float)uVar15 + 3.3981295e-29);
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
                    fVar10 = (float)uVar16 - (3.3981225e-29 - (float)uVar17);
                    fVar19 = SUB84(uVar16,4) - (3.3981295e-29 - (float)uVar18);
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
               (*(pTVar2->klass->vtable).get_text.methodPtr)
                         (pTVar2,(pTVar2->klass->vtable).get_text.method);
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
        (*(pTVar2->klass->vtable).set_text.methodPtr)
                  (pTVar2,value,(pTVar2->klass->vtable).set_text.method);
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
                            __0C9D4E2E140EFE455891ACB53ECA876F500D5100E778EBD63B0F0471E68444EF_Field
                            );
          v1->x = (float)((uint)fVar2 ^
                         __0C9D4E2E140EFE455891ACB53ECA876F500D5100E778EBD63B0F0471E68444EF_Field) +
                  (info->fields).CutoffNear;
          v2->x = fVar2 - (info->fields).CutoffFar;
          fStack_4 = fStack_4 + (info->fields).Margin;
          v2->y = fStack_4;
          v1->y = fStack_4;
          break;
        case 1:
          fVar2 = (float)((uint)fVar2 ^
                         __0C9D4E2E140EFE455891ACB53ECA876F500D5100E778EBD63B0F0471E68444EF_Field);
          v1->y = (float)((uint)fStack_4 ^
                         __0C9D4E2E140EFE455891ACB53ECA876F500D5100E778EBD63B0F0471E68444EF_Field) +
                  (info->fields).CutoffNear;
          v2->y = fStack_4 - (info->fields).CutoffFar;
          fVar2 = fVar2 + (info->fields).Margin;
          v2->x = fVar2;
          v1->x = fVar2;
          return;
        case 2:
          v1->y = (float)((uint)fStack_4 ^
                         __0C9D4E2E140EFE455891ACB53ECA876F500D5100E778EBD63B0F0471E68444EF_Field) +
                  (info->fields).CutoffNear;
          v2->y = fStack_4 - (info->fields).CutoffFar;
          fVar2 = fVar2 - (info->fields).Margin;
          v2->x = fVar2;
          v1->x = fVar2;
          return;
        case 3:
          v1->x = (float)((uint)fVar2 ^
                         __0C9D4E2E140EFE455891ACB53ECA876F500D5100E778EBD63B0F0471E68444EF_Field) +
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


/* Boolean PerformAutoHeight() */

bool Assembly-CSharp.dll::ChatBubble::ChatBubble_PerformAutoHeight
               (ChatBubble *this,MethodInfo *method)

{
  pTVar1 = (this->fields).MessageComponent;
  if (pTVar1 != (Text *)0x0) {
    pRVar2 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                       ((Graphic *)pTVar1,(MethodInfo *)0x0);
    if (pRVar2 != (RectTransform *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_rect
                ((Rect *)&stack0xffffffd4,pRVar2,(MethodInfo *)0x0);
      fVar3 = mscorlib.dll::System::Collections::Generic::
              Dictionary`2[TKey,TValue]+ValueCollection[TKey,TValue]+Enumerator[System::
              Int32Enum,System::Single]::
              Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_Int32Enum_System_Single__get_Current
                        ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_Int32Enum_System_Single_
                          *)&stack0xffffffe4,(MethodInfo *)0x0);
      fVar4 = (this->fields).MessageMinimumSize.y;
      pTVar1 = (this->fields).MessageComponent;
      if (pTVar1 != (Text *)0x0) {
        pRVar2 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                           ((Graphic *)pTVar1,(MethodInfo *)0x0);
        fVar5 = UnityEngine.UI.dll::UnityEngine::UI::LayoutUtility::LayoutUtility_GetPreferredHeight
                          (pRVar2,(MethodInfo *)0x0);
        if (fVar4 <= fVar5) {
          fVar4 = fVar5;
        }
        if (fVar3 == fVar4) {
          return 0;
        }
        pRVar2 = ChatBubble_get_rectTransform(this,(MethodInfo *)0x0);
        this_00 = ChatBubble_get_rectTransform(this,(MethodInfo *)0x0);
        if (this_00 != (RectTransform *)0x0) {
          puVar6 = &UNK_?;
          UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_rect
                    ((Rect *)&stack0xffffffd4,this_00,(MethodInfo *)0x0);
          fVar4 = mscorlib.dll::System::Collections::Generic::
                  Dictionary`2[TKey,TValue]+ValueCollection[TKey,TValue]+Enumerator[System::
                  Int32Enum,System::Single]::
                  Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_Int32Enum_System_Single__get_Current
                            ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_Int32Enum_System_Single_
                              *)&stack0xffffffe4,(MethodInfo *)0x0);
          if (pRVar2 != (RectTransform *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
            RectTransform_SetSizeWithCurrentAnchors
                      (pRVar2,RectTransform_Axis__Enum_Vertical,(0.0 - (float)puVar6) + fVar4,
                       (MethodInfo *)0x0);
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
    pSStack_3 = (SubscribableVariableBase_1_System_Single___Class *)0x0;
    pMStack_4 = (MonitorData *)0x0;
    puStack_5 = (undefined *)0x0;
    if ((pTVar1 != (Text *)0x0) &&
       (pRVar6 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                           ((Graphic *)pTVar1,(MethodInfo *)0x0), pRVar6 != (RectTransform *)0x0)) {
      pRVar7 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_rect
                         ((Rect *)&stack0xffffffd0,pRVar6,(MethodInfo *)0x0);
      pSStack_3 = (SubscribableVariableBase_1_System_Single___Class *)pRVar7->m_XMin;
      pMStack_4 = (MonitorData *)pRVar7->m_YMin;
      puStack_5 = (undefined *)pRVar7->m_Width;
      fVar8 = SubscribableVariableBase`1[System::Single]::
              SubscribableVariableBase_1_System_Single__get_Value
                        ((SubscribableVariableBase_1_System_Single_ *)&pSStack_3,(MethodInfo *)0x0)
      ;
      fVar9 = (this->fields).MessageMinimumSize.x;
      pTVar1 = (this->fields).MessageComponent;
      fVar10 = (this->fields).MessageWrapWidth;
      if (pTVar1 != (Text *)0x0) {
        pRVar6 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                           ((Graphic *)pTVar1,(MethodInfo *)0x0);
        fVar11 = UnityEngine.UI.dll::UnityEngine::UI::LayoutUtility::LayoutUtility_GetPreferredWidth
                          (pRVar6,(MethodInfo *)0x0);
        if (fVar11 <= fVar10) {
          fVar10 = fVar11;
        }
        if (fVar9 <= fVar10) {
          fVar9 = fVar10;
        }
        if (fVar8 == fVar9) {
          return;
        }
        pRVar6 = ChatBubble_get_rectTransform(this,(MethodInfo *)0x0);
        this_00 = ChatBubble_get_rectTransform(this,(MethodInfo *)0x0);
        if (this_00 != (RectTransform *)0x0) {
          pRVar7 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_rect
                             ((Rect *)&stack0xffffffd0,this_00,(MethodInfo *)0x0);
          pSStack_3 = (SubscribableVariableBase_1_System_Single___Class *)pRVar7->m_XMin;
          pMStack_4 = (MonitorData *)pRVar7->m_YMin;
          puStack_5 = (undefined *)pRVar7->m_Width;
          fVar9 = SubscribableVariableBase`1[System::Single]::
                  SubscribableVariableBase_1_System_Single__get_Value
                            ((SubscribableVariableBase_1_System_Single_ *)&pSStack_3,
                             (MethodInfo *)0x0);
          if (pRVar6 != (RectTransform *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
            RectTransform_SetSizeWithCurrentAnchors
                      (pRVar6,RectTransform_Axis__Enum_Horizontal,fVar9 + 5.7176045e-35,
                       (MethodInfo *)0x0);
            ChatBubble_PerformAutoHeight(this,(MethodInfo *)0x0);
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
      UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_rect
                ((Rect *)&stack0xffffffd0,pRVar2,(MethodInfo *)0x0);
      fVar3 = SubscribableVariableBase`1[System::Single]::
              SubscribableVariableBase_1_System_Single__get_Value
                        ((SubscribableVariableBase_1_System_Single_ *)&stack0xffffffe0,
                         (MethodInfo *)0x0);
      fVar4 = (this->fields).MessageMinimumSize.x;
      pTVar1 = (this->fields).MessageComponent;
      fVar5 = (this->fields).MessageWrapWidth;
      if (pTVar1 != (Text *)0x0) {
        pRVar2 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                           ((Graphic *)pTVar1,(MethodInfo *)0x0);
        fVar6 = UnityEngine.UI.dll::UnityEngine::UI::LayoutUtility::LayoutUtility_GetPreferredWidth
                          (pRVar2,(MethodInfo *)0x0);
        if (fVar6 <= fVar5) {
          fVar5 = fVar6;
        }
        if (fVar4 <= fVar5) {
          fVar4 = fVar5;
        }
        if (fVar3 == fVar4) {
          return 0;
        }
        pRVar2 = ChatBubble_get_rectTransform(this,(MethodInfo *)0x0);
        this_00 = ChatBubble_get_rectTransform(this,(MethodInfo *)0x0);
        if (this_00 != (RectTransform *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_rect
                    ((Rect *)&stack0xffffffd0,this_00,(MethodInfo *)0x0);
          puVar7 = &UNK_?;
          fVar5 = SubscribableVariableBase`1[System::Single]::
                  SubscribableVariableBase_1_System_Single__get_Value
                            ((SubscribableVariableBase_1_System_Single_ *)&stack0xffffffe0,
                             (MethodInfo *)0x0);
          if (pRVar2 != (RectTransform *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
            RectTransform_SetSizeWithCurrentAnchors
                      (pRVar2,RectTransform_Axis__Enum_Horizontal,(fVar4 - (float)puVar7) + fVar5,
                       (MethodInfo *)0x0);
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
  info = (ExtenderBorderInfo *)
         UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_main((MethodInfo *)0x0);
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
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
    if (pEVar2 != (ExtenderBorderInfo__Array *)0x0) {
      info = (ExtenderBorderInfo *)(this->fields).ExtenderDock;
      if ((ExtenderBorderInfo *)pEVar2->max_length <= info) goto code_?;
      info = pEVar2->vector[(int)info];
      pTVar3 = (Transform *)ChatBubble_get_rectTransform(this,(MethodInfo *)0x0);
      if (pTVar3 != (Transform *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                  ((Vector3 *)&stack0xffffffe4,pTVar3,(MethodInfo *)0x0);
        this_00 = ChatBubble_get_rectTransform(this,(MethodInfo *)0x0);
        if ((this_00 != (RectTransform *)0x0) &&
           (UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_sizeDelta
                      (this_00,(MethodInfo *)0x0), info != (ExtenderBorderInfo *)0x0)) {
          ChatBubble_SetExtenderAnchorPosToBorder(this,info,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  else {
    pCVar4 = (this->fields).anchor;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                      ((Object_1 *)pCVar4,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar1 == 0) goto code_?;
    pCVar4 = (this->fields).anchor;
    if (((pCVar4 != (ChatAnchor *)0x0) &&
        (pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            ((Component *)pCVar4,(MethodInfo *)0x0), pTVar3 != (Transform *)0x0)) &&
       (pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                           ((Vector3 *)&stack0xfffffff0,pTVar3,(MethodInfo *)0x0),
       info != (ExtenderBorderInfo *)0x0)) {
      pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_WorldToViewportPoint_1
                         ((Vector3 *)&stack0xffffffe4,(Camera *)info,*pVVar5,(MethodInfo *)0x0);
      uVar6 = pVVar5->x;
      uVar7 = pVVar5->y;
      if (((pVVar5->z <= 0.0) || ((float)uVar6 <= 0.0)) ||
         ((_UNK_? <= (float)uVar6 ||
          (((float)uVar7 <= 0.0 || (_UNK_? <= (float)uVar7)))))) {
        ChatBubble_BindExtenderToClosestBorder(this,(Camera *)info,(MethodInfo *)0x0);
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
  *(undefined1 *)&info->klass = *(undefined1 *)&this->klass;
  *(undefined1 *)((int)&info->klass + 1) = *(undefined1 *)((int)&this->klass + 1);
  *(undefined1 *)((int)&info->klass + 2) = *(undefined1 *)((int)&this->klass + 2);
  *(undefined1 *)((int)&info->klass + 3) = *(undefined1 *)((int)&this->klass + 3);
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


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
  if ((pIVar6 != (Image *)0x0) &&
     (pRVar7 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                         ((Graphic *)pIVar6,(MethodInfo *)0x0), pRVar7 != (RectTransform *)0x0)) {
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
            this_00 = (Image *)UnityEngine.UI.dll::UnityEngine::UI::Graphic::
                               Graphic_get_rectTransform((Graphic *)pIVar6,(MethodInfo *)0x0);
            fVar3 = 0.0;
code_?:
            euler_00.y = fStack_1;
            euler_00.x = fStack_1;
            euler_00.z = fVar3;
            pQVar8 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::
                     Quaternion_Internal_FromEulerRad
                               ((Quaternion *)&fStack_1,euler_00,(MethodInfo *)0x0);
            if (this_00 != (Image *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
                        ((Transform *)this_00,*pQVar8,(MethodInfo *)0x0);
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
            this_00 = (Image *)UnityEngine.UI.dll::UnityEngine::UI::Graphic::
                               Graphic_get_rectTransform((Graphic *)pIVar6,(MethodInfo *)0x0);
            fVar3 = -1.5707964;
code_?:
            euler.y = fStack_1;
            euler.x = fStack_1;
            euler.z = fVar3;
            pQVar8 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::
                     Quaternion_Internal_FromEulerRad
                               ((Quaternion *)&fStack_1,euler,(MethodInfo *)0x0);
            if (this_00 != (Image *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localRotation
                        ((Transform *)this_00,*pQVar8,(MethodInfo *)0x0);
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
                      (pRVar7,(Vector2)0x3f0000003f800000,(MethodInfo *)0x0),
           this_00 != (Image *)0x0)) {
          UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_anchorMin
                    ((RectTransform *)this_00,(Vector2)0x0,(MethodInfo *)0x0);
          pIVar6 = (this->fields).ExtenderComponent;
          if (pIVar6 != (Image *)0x0) {
            this_00 = (Image *)UnityEngine.UI.dll::UnityEngine::UI::Graphic::
                               Graphic_get_rectTransform((Graphic *)pIVar6,(MethodInfo *)0x0);
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
                      (pRVar7,(Vector2)0x3f8000003f000000,(MethodInfo *)0x0),
           this_00 != (Image *)0x0)) {
          UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_anchorMin
                    ((RectTransform *)this_00,(Vector2)0x0,(MethodInfo *)0x0);
          pIVar6 = (this->fields).ExtenderComponent;
          if (pIVar6 != (Image *)0x0) {
            this_00 = (Image *)UnityEngine.UI.dll::UnityEngine::UI::Graphic::
                               Graphic_get_rectTransform((Graphic *)pIVar6,(MethodInfo *)0x0);
            fVar3 = 3.1415927;
            goto code_?;
          }
        }
      }
      break;
    default:
code_?:
      pIVar6 = (this->fields).ExtenderComponent;
      if (pIVar6 != (Image *)0x0) {
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
            pEVar9 = (this->fields).ExtenderBorderInfo;
            if (pEVar9 != (ExtenderBorderInfo__Array *)0x0) {
              uVar10 = (this->fields).ExtenderDock;
              if (pEVar9->max_length <= uVar10) goto code_?;
              if (pEVar9->vector[uVar10] != (ExtenderBorderInfo *)0x0) {
                if ((pEVar9->vector[uVar10]->fields).Enabled == 0) {
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
        }
        else {
          pEVar9 = (this->fields).ExtenderBorderInfo;
          if (pEVar9 != (ExtenderBorderInfo__Array *)0x0) {
            uVar10 = (this->fields).ExtenderDock;
            if (pEVar9->max_length <= uVar10) goto code_?;
            if (pEVar9->vector[uVar10] != (ExtenderBorderInfo *)0x0) {
              if ((pEVar9->vector[uVar10]->fields).Enabled != 0) goto code_?;
              pIVar6 = (this->fields).ExtenderComponent;
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
  func_?();
code_?:
  uVar11 = func_?();
  *(undefined1 *)&this_00->klass = uVar11;
  pbVar12 = (byte *)((int)&stack0x00000000 * 2 + 0x48);
  *pbVar12 = *pbVar12 ^ in_stack_13;
  LOCK();
  UNLOCK();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
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
  RStack_1.m_XMin = 0.0;
  RStack_1.m_YMin = 0.0;
  RStack_1.m_Width = 0.0;
  RStack_1.m_Height = 0.0;
  fStack_2 = (this->fields).MessageMinimumSize.x;
  pTVar3 = (this->fields).MessageComponent;
  fStack_4 = (this->fields).MessageMinimumSize.y;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar5 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Implicit
                    ((Object_1 *)pTVar3,(MethodInfo *)0x0);
  if (bVar5 != 0) {
    pTVar3 = (this->fields).MessageComponent;
    if (pTVar3 != (Text *)0x0) {
      uVar6 = (*(pTVar3->klass->vtable).get_text.methodPtr)
                        (pTVar3,(pTVar3->klass->vtable).get_text.method);
      pTVar3 = (this->fields).MessageComponent;
      if (pTVar3 != (Text *)0x0) {
        (*(pTVar3->klass->vtable).set_text.methodPtr)
                  (pTVar3,value,(pTVar3->klass->vtable).set_text.method);
        ChatBubble_PerformAutoSize(this,(MethodInfo *)0x0);
        pTVar3 = (this->fields).MessageComponent;
        if (pTVar3 != (Text *)0x0) {
          this_00 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                              ((Graphic *)pTVar3,(MethodInfo *)0x0);
          if (this_00 != (RectTransform *)0x0) {
            pRVar7 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_rect
                               ((Rect *)auStack_8,this_00,(MethodInfo *)0x0);
            RStack_1.m_XMin = pRVar7->m_XMin;
            RStack_1.m_YMin = pRVar7->m_YMin;
            RStack_1.m_Width = pRVar7->m_Width;
            RStack_1.m_Height = pRVar7->m_Height;
            VVar9 = UnityEngine.CoreModule.dll::UnityEngine::Rect::Rect_get_size
                              (&RStack_1,(MethodInfo *)0x0);
            pTVar3 = (this->fields).MessageComponent;
            (this->fields).MessageMinimumSize.x = (float)auStack_8._8_4_;
            fStack_10 = VVar9.y;
            (this->fields).MessageMinimumSize.y = fStack_10;
            unique0x10000300 = VVar9;
            if (pTVar3 != (Text *)0x0) {
              (*(pTVar3->klass->vtable).set_text.methodPtr)
                        (pTVar3,uVar6,(pTVar3->klass->vtable).set_text.method);
              goto code_?;
            }
          }
        }
      }
    }
    func_?();
    pcVar11 = (code *)swi(3);
    VVar9 = (Vector2)(*pcVar11)();
    return VVar9;
  }
code_?:
  VVar9.y = fStack_4;
  VVar9.x = fStack_2;
  return VVar9;
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
    if (pIVar1 != (Image *)0x0) {
      this_00 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                          ((Graphic *)pIVar1,(MethodInfo *)0x0);
      pIVar1 = (this->fields).ExtenderComponent;
      if ((pIVar1 != (Image *)0x0) &&
         (pRVar2 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                              ((Graphic *)pIVar1,(MethodInfo *)0x0), pRVar2 != (RectTransform *)0x0
         )) {
        UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_anchoredPosition
                  (pRVar2,(MethodInfo *)0x0);
joined_?:
        if (info != (ExtenderBorderInfo *)0x0) goto code_?;
      }
    }
    break;
  case 1:
    pIVar1 = (this->fields).ExtenderComponent;
    if (((pIVar1 != (Image *)0x0) &&
        (this_00 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                             ((Graphic *)pIVar1,(MethodInfo *)0x0),
        info != (ExtenderBorderInfo *)0x0)) &&
       ((pIVar1 = (this->fields).ExtenderComponent, pIVar1 != (Image *)0x0 &&
        (pRVar2 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                             ((Graphic *)pIVar1,(MethodInfo *)0x0), pRVar2 != (RectTransform *)0x0)
        ))) {
      UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_anchoredPosition
                (pRVar2,(MethodInfo *)0x0);
code_?:
      if (this_00 != (RectTransform *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_anchoredPosition
                  (this_00,(Vector2)0x0,(MethodInfo *)0x0);
code_?:
        return;
      }
    }
    break;
  case 2:
    pIVar1 = (this->fields).ExtenderComponent;
    if ((((pIVar1 != (Image *)0x0) &&
         (this_00 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                              ((Graphic *)pIVar1,(MethodInfo *)0x0),
         info != (ExtenderBorderInfo *)0x0)) &&
        (pIVar1 = (this->fields).ExtenderComponent, pIVar1 != (Image *)0x0)) &&
       (pRVar2 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                            ((Graphic *)pIVar1,(MethodInfo *)0x0), pRVar2 != (RectTransform *)0x0))
    {
      UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_anchoredPosition
                (pRVar2,(MethodInfo *)0x0);
      goto code_?;
    }
    break;
  case 3:
    pIVar1 = (this->fields).ExtenderComponent;
    if (pIVar1 != (Image *)0x0) {
      this_00 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
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
  uVar3 = 0x102c;
  func_?();
  cVar4 = (char)in_stack_5 + -0x10;
  if (cVar4 == '\0' || (char)in_stack_5 < '\x10') {
    pcVar6 = (code *)swi(1);
    (*pcVar6)();
    return;
  }
  iVar7 = unaff_retaddr - unaff_EBP;
  *(char *)(unaff_EBP - 0x75) =
       *(char *)(unaff_EBP - 0x75) + (char)method + (unaff_retaddr < unaff_EBP);
  iVar8 = *(int *)(CONCAT31((int3)((uint)in_stack_5 >> 8),cVar4) + 0x1a);
  piVar9 = in_stack_10;
  if ((iVar8 != 0) && (iVar8 = *(int *)(iVar8 + 0x38), iVar8 != 0)) {
    in_stack_10[-1] = 0;
    in_stack_10[-2] = iVar8;
    in_stack_10[-3] = &UNK_?;
    pMVar11 = MVNetworkGame::MVNetworkGame_get_LocalPlayer
                        ((MVNetworkGame *)in_stack_10[-2],(MethodInfo *)in_stack_10[-1])
    ;
    piVar9 = in_stack_10 + 2;
    if (pMVar11 != (MVLocalPlayer *)0x0) {
      in_stack_10[1] = 0;
      *in_stack_10 = pMVar11;
      in_stack_10[-1] = &UNK_?;
      bVar12 = MVPlayer::MVPlayer_get_IsReady
                         ((MVPlayer *)*in_stack_10,(MethodInfo *)in_stack_10[1]);
      pOVar13 = TypeInfo__UnityEngine__Object;
      if (bVar12 != 0) {
        iVar8 = *(int *)(iVar7 + 8);
        puVar14 = in_stack_10 + 3;
        in_stack_10[3] = CONCAT22(uVar3,in_DS);
        uVar15 = *(undefined4 *)(iVar8 + 0x40);
        if ((pOVar13->_1).cctor_finished_or_no_cctor == 0) {
          in_stack_10[2] = pOVar13;
          puVar16 = in_stack_10 + 1;
          in_stack_10[1] = &UNK_?;
          func_?();
          puVar14 = (undefined4 *)((int)puVar16 + 4);
        }
        *(undefined4 *)((int)puVar14 + -4) = 0;
        *(undefined4 *)((int)puVar14 + -8) = 0;
        *(undefined4 *)((int)puVar14 + -0xc) = uVar15;
        *(undefined **)((int)puVar14 + -0x10) = &UNK_?;
        bVar12 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                           (*(Object_1 **)((int)puVar14 + -0xc),*(Object_1 **)((int)puVar14 + -8),
                            *(MethodInfo **)((int)puVar14 + -4));
        if (bVar12 == 0) {
          iVar17 = *(int *)(iVar8 + 0x40);
          piVar9 = (int *)((int)puVar14 + 0x10);
          if (iVar17 != 0) {
            *(undefined4 *)((int)puVar14 + 0xc) = 0;
            *(int *)((int)puVar14 + 8) = iVar17;
            *(undefined **)((int)puVar14 + 4) = &UNK_?;
            pTVar18 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                (*(Component **)((int)puVar14 + 8),
                                 *(MethodInfo **)((int)puVar14 + 0xc));
            piVar9 = (int *)((int)puVar14 + 0x18);
            if (pTVar18 != (Transform *)0x0) {
              *(undefined4 *)((int)puVar14 + 0x14) = 0;
              *(Transform **)((int)puVar14 + 0x10) = pTVar18;
              *(int *)((int)puVar14 + 0xc) = iVar7 + -0x1c;
              *(undefined **)((int)puVar14 + 8) = &UNK_?;
              pVVar19 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                  (*(Vector3 **)((int)puVar14 + 0xc),
                                   *(Transform **)((int)puVar14 + 0x10),
                                   *(MethodInfo **)((int)puVar14 + 0x14));
              piVar20 = (int *)((int)puVar14 + 0x24);
              bVar21 = cRam_? == '\0';
              fVar22 = pVVar19->z;
              *(undefined8 *)(iVar7 + -0x10) = *(undefined8 *)pVVar19;
              *(float *)(iVar7 + -8) = fVar22;
              if (bVar21) {
                *(MVGameControllerBase__Class ***)((int)puVar14 + 0x20) =
                     &TypeInfo__MVGameControllerBase;
                puVar23 = (undefined1 *)((int)puVar14 + 0x1c);
                *(undefined **)((int)puVar14 + 0x1c) = &UNK_?;
                func_?();
                piVar20 = (int *)(puVar23 + 4);
                cRam_? = '\x01';
              }
              pMVar24 = TypeInfo__MVGameControllerBase->static_fields->instance;
              piVar9 = piVar20;
              if ((pMVar24 != (MVGameControllerBase *)0x0) &&
                 (pMVar25 = (pMVar24->fields).game, pMVar25 != (MVNetworkGame *)0x0)) {
                piVar20[-1] = 0;
                piVar20[-2] = (int)pMVar25;
                piVar20[-3] = (int)&UNK_?;
                pMVar11 = MVNetworkGame::MVNetworkGame_get_LocalPlayer
                                    ((MVNetworkGame *)piVar20[-2],(MethodInfo *)piVar20[-1]);
                piVar9 = piVar20 + 2;
                if ((pMVar11 != (MVLocalPlayer *)0x0) &&
                   (pSVar26 = (pMVar11->fields).spawnRoleDataMediator, piVar9 = piVar20 + 2,
                   pSVar26 != (SpawnRoleDataMediator *)0x0)) {
                  piVar20[1] = (int)
                               MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<UnityEngine::Vector3>__op_Implicit_MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<UnityEngine::Vector3>_
                  ;
                  *piVar20 = (int)(pSVar26->fields).position;
                  piVar20[-1] = iVar7 + -0x28;
                  piVar20[-2] = (int)&UNK_?;
                  pVVar19 = Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
                            SpawnRoleVariableTypes::SpawnRoleVariable`1[UnityEngine::Vector3]::
                            SpawnRoleVariable_1_UnityEngine_Vector3__op_Implicit
                                      ((Vector3 *)piVar20[-1],
                                       (SpawnRoleVariable_1_UnityEngine_Vector3_ *)*piVar20,
                                       (MethodInfo *)piVar20[1]);
                  fVar22 = *(float *)(iVar7 + -0x10);
                  fVar27 = *(float *)(iVar7 + -0xc);
                  fVar28 = pVVar19->z;
                  *(undefined8 *)(iVar7 + -0x1c) = *(undefined8 *)pVVar19;
                  fVar29 = *(float *)(iVar7 + -0x1c);
                  fVar30 = *(float *)(iVar7 + -0x18);
                  *(float *)(iVar7 + -0x14) = fVar28;
                  *(float *)(iVar7 + -8) = *(float *)(iVar7 + -8) - *(float *)(iVar7 + -0x14);
                  *(undefined4 *)(iVar7 + -0x14) = *(undefined4 *)(iVar7 + -8);
                  piVar20[1] = 0;
                  *piVar20 = iVar7 + -0x1c;
                  *(ulonglong *)(iVar7 + -0x1c) = CONCAT44(fVar27 - fVar30,fVar22 - fVar29);
                  piVar31 = piVar20 + -1;
                  piVar20[-1] = (int)&UNK_?;
                  fVar32 = (float10)func_?();
                  *(float *)(iVar7 + -4) = (float)fVar32;
                  piVar9 = (int *)((int)piVar31 + 0x14);
                  if (*(float *)(iVar7 + -4) <= _UNK_?) {
                    return;
                  }
                  iVar8 = *(int *)(iVar8 + 0x30);
                  if (iVar8 != 0) {
                    fVar22 = _UNK_? - *(float *)(iVar7 + -4);
                    *(undefined4 *)((int)piVar31 + 0x10) = 0;
                    *(undefined4 *)((int)piVar31 + 0xc) = extraout_ECX;
                    *(float *)((int)piVar31 + 0xc) = fVar22 / _UNK_?;
                    *(int *)((int)piVar31 + 8) = iVar8;
                    *(undefined **)((int)piVar31 + 4) = &UNK_?;
                    UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                              (*(CanvasGroup **)((int)piVar31 + 8),*(float *)((int)piVar31 + 0xc),
                               *(MethodInfo **)((int)piVar31 + 0x10));
                    return;
                  }
                }
              }
            }
          }
          goto code_?;
        }
      }
      return;
    }
  }
code_?:
  piVar9[-1] = (int)&UNK_?;
  func_?();
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

