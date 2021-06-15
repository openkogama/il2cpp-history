
/* Void Awake() */

void Assembly-CSharp.dll::ChatBubble::ChatBubble_Awake(ChatBubble *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((this->fields).ExtenderBorderInfo != (ExtenderBorderInfo__Array *)0x0) {
    return;
  }
  pEVar1 = (ExtenderBorderInfo__Array *)func_?(TypeInfo__ExtenderBorderInfo,4);
  (this->fields).ExtenderBorderInfo = pEVar1;
  pEVar2 = (ExtenderBorderInfo *)func_?(TypeInfo__ExtenderBorderInfo);
  AvatarLimbManager+LimbRotator::AvatarLimbManager_LimbRotator__ctor
            ((AvatarLimbManager_LimbRotator *)pEVar2,(MethodInfo *)0x0);
  if ((pEVar2 == (ExtenderBorderInfo *)0x0) ||
     ((pEVar2->fields).Border = 0, pEVar1 == (ExtenderBorderInfo__Array *)0x0)) {
code_?:
    func_?(0);
code_?:
    uVar3 = func_?(0,0);
    func_?(uVar3);
code_?:
    uVar3 = func_?(0,0);
    func_?(uVar3);
code_?:
    uVar3 = func_?(0,0);
    func_?(uVar3);
code_?:
    uVar3 = func_?(0,0);
    func_?(uVar3);
code_?:
    uVar3 = func_?(0,0);
    func_?(uVar3);
code_?:
    uVar3 = func_?(0,0);
    func_?(uVar3);
  }
  else {
    iVar4 = func_?(pEVar2,(pEVar1->klass->_0).element_class);
    if (iVar4 == 0) goto code_?;
    if (pEVar1->max_length == 0) goto code_?;
    pEVar1->vector[0] = pEVar2;
    pEVar1 = (this->fields).ExtenderBorderInfo;
    pEVar2 = (ExtenderBorderInfo *)func_?(TypeInfo__ExtenderBorderInfo);
    AvatarLimbManager+LimbRotator::AvatarLimbManager_LimbRotator__ctor
              ((AvatarLimbManager_LimbRotator *)pEVar2,(MethodInfo *)0x0);
    if ((pEVar2 == (ExtenderBorderInfo *)0x0) ||
       ((pEVar2->fields).Border = 1, pEVar1 == (ExtenderBorderInfo__Array *)0x0))
    goto code_?;
    iVar4 = func_?(pEVar2,(pEVar1->klass->_0).element_class);
    if (iVar4 == 0) goto code_?;
    if (pEVar1->max_length < 2) goto code_?;
    pEVar1->vector[1] = pEVar2;
    pEVar1 = (this->fields).ExtenderBorderInfo;
    pEVar2 = (ExtenderBorderInfo *)func_?(TypeInfo__ExtenderBorderInfo);
    AvatarLimbManager+LimbRotator::AvatarLimbManager_LimbRotator__ctor
              ((AvatarLimbManager_LimbRotator *)pEVar2,(MethodInfo *)0x0);
    if ((pEVar2 == (ExtenderBorderInfo *)0x0) ||
       ((pEVar2->fields).Border = 2, pEVar1 == (ExtenderBorderInfo__Array *)0x0))
    goto code_?;
    iVar4 = func_?(pEVar2,(pEVar1->klass->_0).element_class);
    if (iVar4 == 0) goto code_?;
    if (pEVar1->max_length < 3) goto code_?;
    pEVar1->vector[2] = pEVar2;
    pEVar1 = (this->fields).ExtenderBorderInfo;
    pEVar2 = (ExtenderBorderInfo *)func_?(TypeInfo__ExtenderBorderInfo);
    AvatarLimbManager+LimbRotator::AvatarLimbManager_LimbRotator__ctor
              ((AvatarLimbManager_LimbRotator *)pEVar2,(MethodInfo *)0x0);
    if ((pEVar2 == (ExtenderBorderInfo *)0x0) ||
       ((pEVar2->fields).Border = 3, pEVar1 == (ExtenderBorderInfo__Array *)0x0))
    goto code_?;
    iVar4 = func_?(pEVar2,(pEVar1->klass->_0).element_class);
    if (iVar4 != 0) {
      if (3 < pEVar1->max_length) {
        pEVar1->vector[3] = pEVar2;
        return;
      }
      goto code_?;
    }
  }
  uVar3 = func_?(0,0);
  func_?(uVar3);
code_?:
  uVar3 = func_?(0,0);
  func_?(uVar3);
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
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((camera != (Camera *)0x0) &&
     (pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                          ((Component_1 *)camera,(MethodInfo *)0x0), pTVar1 != (Transform *)0x0)) {
    pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                        ((Vector3 *)&stack0xffffffc4,pTVar1,(MethodInfo *)0x0);
    uVar3 = pVVar2->x;
    uVar4 = pVVar2->y;
    fVar5 = pVVar2->z;
    pCVar6 = (this->fields).anchor;
    if ((pCVar6 != (ChatAnchor *)0x0) &&
       (pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                            ((Component_1 *)pCVar6,(MethodInfo *)0x0), pTVar1 != (Transform *)0x0))
    {
      pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                          ((Vector3 *)&stack0xffffffc4,pTVar1,(MethodInfo *)0x0);
      VStack_7.y = pVVar2->x;
      VStack_7.z = pVVar2->y;
      fStack_8 = pVVar2->z;
      pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                          ((Component_1 *)camera,(MethodInfo *)0x0);
      if (pTVar1 != (Transform *)0x0) {
        pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up
                            ((Vector3 *)&stack0xffffffc4,pTVar1,(MethodInfo *)0x0);
        VVar9 = *pVVar2;
        if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
          func_?();
        }
        a_04.y = (float)uVar4;
        a_04.x = (float)uVar3;
        a_04.z = fVar5;
        pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                            ((Vector3 *)&stack0xffffffc4,a_04,VVar9,(MethodInfo *)0x0);
        VVar9.z = fStack_8;
        VVar9.x = VStack_7.y;
        VVar9.y = VStack_7.z;
        UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                  ((Vector3 *)&stack0xffffffc4,VVar9,*pVVar2,(MethodInfo *)0x0);
        uVar3 = 0;
        puVar10 = &stack0xffffffb8;
        fVar11 = (float10)func_?();
        pCVar6 = (this->fields).anchor;
        VStack_7.z = (float)fVar11;
        if ((pCVar6 != (ChatAnchor *)0x0) &&
           (pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                                ((Component_1 *)pCVar6,(MethodInfo *)0x0),
           pTVar1 != (Transform *)0x0)) {
          pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                              ((Vector3 *)&stack0xffffffc4,pTVar1,(MethodInfo *)0x0);
          VVar9 = *pVVar2;
          pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                              ((Component_1 *)camera,(MethodInfo *)0x0);
          if (pTVar1 != (Transform *)0x0) {
            pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up
                                ((Vector3 *)&stack0xffffffc4,pTVar1,(MethodInfo *)0x0);
            a.y = (float)uVar3;
            a.x = (float)puVar10;
            a.z = fVar5;
            pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                                ((Vector3 *)&stack0xffffffc4,a,*pVVar2,(MethodInfo *)0x0);
            UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                      ((Vector3 *)&stack0xffffffc4,VVar9,*pVVar2,(MethodInfo *)0x0);
            fVar11 = (float10)func_?();
            fStack_8 = (float)fVar11;
            if (VStack_7.z < fStack_8) {
              fStack_8 = VStack_7.z;
              iVar12 = 3;
            }
            else {
              iVar12 = 0;
            }
            pCVar6 = (this->fields).anchor;
            if ((pCVar6 != (ChatAnchor *)0x0) &&
               (pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                          Component_1_get_transform((Component_1 *)pCVar6,(MethodInfo *)0x0),
               pTVar1 != (Transform *)0x0)) {
              pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                  ((Vector3 *)&stack0xffffffd0,pTVar1,(MethodInfo *)0x0);
              fVar13 = pVVar2->x;
              fVar14 = pVVar2->y;
              fVar15 = pVVar2->z;
              pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                        Component_1_get_transform((Component_1 *)camera,(MethodInfo *)0x0);
              if (pTVar1 != (Transform *)0x0) {
                pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_right
                                    (&VStack_7,pTVar1,(MethodInfo *)0x0);
                uVar16._0_4_ = pVVar2->x;
                uVar16._4_4_ = pVVar2->y;
                fVar17 = pVVar2->z;
                VStack_7.z = fVar17;
                if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000)
                     != 0) && ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
                  func_?(TypeInfo__UnityEngine__Vector3);
                }
                a_00.y = (float)uVar3;
                a_00.x = (float)puVar10;
                a_00.z = fVar5;
                b.z = VStack_7.z;
                b.x = (float)(int)uVar16;
                b.y = (float)(int)((ulonglong)uVar16 >> 0x20);
                pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                                    ((Vector3 *)&stack0xffffffd0,a_00,b,(MethodInfo *)0x0);
                a_02.y = fVar14;
                a_02.x = fVar13;
                a_02.z = fVar15;
                UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                          ((Vector3 *)&stack0xffffffc4,a_02,*pVVar2,(MethodInfo *)0x0);
                fVar11 = (float10)func_?();
                pCVar6 = (this->fields).anchor;
                VStack_7.z = (float)fVar11;
                if ((pCVar6 != (ChatAnchor *)0x0) &&
                   (pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                              Component_1_get_transform((Component_1 *)pCVar6,(MethodInfo *)0x0),
                   pTVar1 != (Transform *)0x0)) {
                  pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                            Transform_get_position
                                      ((Vector3 *)&stack0xffffffd0,pTVar1,(MethodInfo *)0x0);
                  fVar15 = pVVar2->x;
                  fVar17 = pVVar2->y;
                  fVar13 = pVVar2->z;
                  pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                            Component_1_get_transform((Component_1 *)camera,(MethodInfo *)0x0);
                  if (pTVar1 != (Transform *)0x0) {
                    pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                              Transform_get_right((Vector3 *)&stack0xffffffd0,pTVar1,
                                                  (MethodInfo *)0x0);
                    a_01.y = (float)uVar3;
                    a_01.x = (float)puVar10;
                    a_01.z = fVar5;
                    pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::
                              Vector3_op_Subtraction
                                        ((Vector3 *)&stack0xffffffd0,a_01,*pVVar2,(MethodInfo *)0x0
                                        );
                    a_03.y = fVar17;
                    a_03.x = fVar15;
                    a_03.z = fVar13;
                    UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                              ((Vector3 *)&stack0xffffffc4,a_03,*pVVar2,(MethodInfo *)0x0);
                    fVar11 = (float10)func_?();
                    if (VStack_7.z < (float)fVar11) {
                      iVar18 = 2;
                      fVar5 = VStack_7.z;
                    }
                    else {
                      iVar18 = 1;
                      fVar5 = (float)fVar11;
                    }
                    iVar19 = (this->fields).ExtenderDock;
                    if (fVar5 < fStack_8) {
                      if (iVar19 == iVar18) {
                        return;
                      }
                      (this->fields).ExtenderDock = iVar18;
                    }
                    else {
                      if (iVar19 == iVar12) {
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
  func_?(0);
  pcVar20 = (code *)swi(3);
  (*pcVar20)();
  return;
}


/* Boolean BindMessageValue(String) */

bool Assembly-CSharp.dll::ChatBubble::ChatBubble_BindMessageValue
               (ChatBubble *this,String *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((this->fields).isActive == 0) {
    return 0;
  }
  if (value == (String *)0x0) goto code_?;
  pIVar1 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
           Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)value,(MethodInfo *)0x0);
  if (0x82 < (int)pIVar1) {
    pSVar2 = mscorlib.dll::System::String::String_Substring_1(value,0,0x82,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?();
    }
    value = mscorlib.dll::System::String::String_Concat_2
                      (pSVar2,StringLiteral____,(MethodInfo *)0x0);
  }
  pTVar3 = (this->fields).MessageComponent;
  (this->fields).MessageValue = value;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?();
  }
  bVar4 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Implicit
                    ((Object_1 *)pTVar3,(MethodInfo *)0x0);
  if (bVar4 == 0) {
    return 0;
  }
  pTVar3 = (this->fields).MessageComponent;
  if (pTVar3 == (Text *)0x0) goto code_?;
  pSVar2 = (String *)(*(code *)(pTVar3->klass->vtable).get_text.method)();
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?();
  }
  bVar4 = mscorlib.dll::System::String::String_op_Inequality(pSVar2,value,(MethodInfo *)0x0);
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
    (*(code *)(pTVar3->klass->vtable).set_text.method)();
    if ((this->fields).AutoSize != 0) {
      ChatBubble_PerformAutoSize(this,(MethodInfo *)0x0);
    }
    ChatBubble_SetChatBubbleVisibility(this,1,(MethodInfo *)0x0);
    pCVar8 = (this->fields).anchor;
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?();
    }
    bVar4 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                      ((Object_1 *)pCVar8,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar4 == 0) {
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
code_?:
  func_?();
  pcVar9 = (code *)swi(3);
  bVar4 = (*pcVar9)();
  return bVar4;
}


/* Void CalculateExtenderBorderVertices(ExtenderBorderInfo, Vector3 ByRef, Vector3 ByRef) */

void Assembly-CSharp.dll::ChatBubble::ChatBubble_CalculateExtenderBorderVertices
               (ChatBubble *this,ExtenderBorderInfo *info,Vector3 *v1,Vector3 *v2,MethodInfo *method
               )

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  this_00 = (Transform *)ChatBubble_get_rectTransform(this,(MethodInfo *)0x0);
  if (this_00 != (Transform *)0x0) {
    pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                       (&VStack_2,this_00,(MethodInfo *)0x0);
    fVar3 = pVVar1->z;
    v2->z = fVar3;
    v1->z = fVar3;
    this_01 = ChatBubble_get_rectTransform(this,(MethodInfo *)0x0);
    if (this_01 != (RectTransform *)0x0) {
      VStack_2.z = (float)&UNK_?;
      VVar4 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_sizeDelta
                        (this_01,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__UnityEngine__Vector2->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Vector2->_1).cctor_started == 0)) {
        func_?();
      }
      VVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector2::Vector2_op_Division_1
                        (VVar4,2.0,(MethodInfo *)0x0);
      fVar3 = VVar4.x;
      fStack_5 = VVar4.y;
      if (info != (ExtenderBorderInfo *)0x0) {
        switch((info->fields).Border) {
        case 0:
          v1->x = (float)((uint)fVar3 ^ _UNK_?) + (info->fields).CutoffNear;
          fStack_5 = (float)((uint)fStack_5 ^ _UNK_?);
          v2->x = fVar3 - (info->fields).CutoffFar;
          fStack_5 = fStack_5 + (info->fields).Margin;
          v2->y = fStack_5;
          v1->y = fStack_5;
          break;
        case 1:
          v1->y = (float)((uint)fStack_5 ^ _UNK_?) + (info->fields).CutoffNear;
          fVar3 = (float)((uint)fVar3 ^ _UNK_?);
          v2->y = fStack_5 - (info->fields).CutoffFar;
          fVar3 = fVar3 + (info->fields).Margin;
          v2->x = fVar3;
          v1->x = fVar3;
          return;
        case 2:
          v1->y = (float)((uint)fStack_5 ^ _UNK_?) + (info->fields).CutoffNear;
          v2->y = fStack_5 - (info->fields).CutoffFar;
          fVar3 = fVar3 - (info->fields).Margin;
          v2->x = fVar3;
          v1->x = fVar3;
          return;
        case 3:
          v1->x = (float)((uint)fVar3 ^ _UNK_?) + (info->fields).CutoffNear;
          v2->x = fVar3 - (info->fields).CutoffFar;
          fStack_5 = fStack_5 - (info->fields).Margin;
          v2->y = fStack_5;
          v1->y = fStack_5;
          return;
        }
        return;
      }
    }
  }
  uVar6 = func_?();
  out(0x24,uVar6 & 0xffffff10);
  out(0x24,uVar6 & 0xffffff10);
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
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
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
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
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
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
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields).MessageComponent;
  if (pTVar1 != (Text *)0x0) {
    pRVar2 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                       ((Graphic *)pTVar1,(MethodInfo *)0x0);
    if (pRVar2 != (RectTransform *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_rect
                ((Rect *)&stack0xffffffc4,pRVar2,(MethodInfo *)0x0);
      fVar3 = UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager+VirtualAxis::
              CrossPlatformInputManager_VirtualAxis_get_GetValueRaw
                        ((CrossPlatformInputManager_VirtualAxis *)&stack0xffffffe4,(MethodInfo *)0x0
                        );
      fVar4 = (this->fields).MessageMinimumSize.y;
      pTVar1 = (this->fields).MessageComponent;
      if (pTVar1 != (Text *)0x0) {
        pRVar2 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                           ((Graphic *)pTVar1,(MethodInfo *)0x0);
        b = UnityEngine.UI.dll::UnityEngine::UI::LayoutUtility::LayoutUtility_GetPreferredHeight
                      (pRVar2,(MethodInfo *)0x0);
        if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
          func_?();
        }
        fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Max(fVar4,b,(MethodInfo *)0x0)
        ;
        if (fVar3 == fVar4) {
          return 0;
        }
        pRVar2 = ChatBubble_get_rectTransform(this,(MethodInfo *)0x0);
        this_00 = ChatBubble_get_rectTransform(this,(MethodInfo *)0x0);
        if (this_00 != (RectTransform *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_rect
                    ((Rect *)&stack0xffffffc4,this_00,(MethodInfo *)0x0);
          puVar5 = &UNK_?;
          fVar3 = UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager+VirtualAxis::
                  CrossPlatformInputManager_VirtualAxis_get_GetValueRaw
                            ((CrossPlatformInputManager_VirtualAxis *)&stack0xffffffd4,
                             (MethodInfo *)0x0);
          if (pRVar2 != (RectTransform *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
            RectTransform_SetSizeWithCurrentAnchors
                      (pRVar2,RectTransform_Axis__Enum_Vertical,(fVar4 - (float)puVar5) + fVar3,
                       (MethodInfo *)0x0);
            return 1;
          }
        }
      }
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  bVar7 = (*pcVar6)();
  return bVar7;
}


/* Void PerformAutoSize() */

void Assembly-CSharp.dll::ChatBubble::ChatBubble_PerformAutoSize
               (ChatBubble *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields).MessageComponent;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Implicit
                    ((Object_1 *)pTVar1,(MethodInfo *)0x0);
  if (bVar2 == 0) {
    return;
  }
  ChatBubble_PerformAutoHeight(this,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields).MessageComponent;
  pSStack_3 = (SubscribableVariableBase_1_System_Single___Class *)0x0;
  pMStack_4 = (MonitorData *)0x0;
  puStack_5 = (undefined *)0x0;
  if ((pTVar1 != (Text *)0x0) &&
     (pRVar6 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                         ((Graphic *)pTVar1,(MethodInfo *)0x0), pRVar6 != (RectTransform *)0x0)) {
    UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_rect
              ((Rect *)&stack0xffffffc0,pRVar6,(MethodInfo *)0x0);
    fVar7 = SubscribableVariableBase`1[System::Single]::
            SubscribableVariableBase_1_System_Single__get_Value
                      ((SubscribableVariableBase_1_System_Single_ *)&stack0xffffffe0,
                       (MethodInfo *)0x0);
    pMStack_8 = (Mathf__Class *)(this->fields).MessageMinimumSize.x;
    pTVar1 = (this->fields).MessageComponent;
    fVar9 = (this->fields).MessageWrapWidth;
    if (pTVar1 != (Text *)0x0) {
      pRVar6 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                         ((Graphic *)pTVar1,(MethodInfo *)0x0);
      fVar10 = UnityEngine.UI.dll::UnityEngine::UI::LayoutUtility::LayoutUtility_GetPreferredWidth
                        (pRVar6,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
        pMStack_8 = TypeInfo__UnityEngine__Mathf;
        func_?();
      }
      fVar9 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Min
                        (fVar9,fVar10,(MethodInfo *)0x0);
      fVar9 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Max
                        ((float)pMStack_8,fVar9,(MethodInfo *)0x0);
      if (fVar7 == fVar9) {
        return;
      }
      pRVar6 = ChatBubble_get_rectTransform(this,(MethodInfo *)0x0);
      this_00 = ChatBubble_get_rectTransform(this,(MethodInfo *)0x0);
      if (this_00 != (RectTransform *)0x0) {
        pRVar11 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_rect
                           ((Rect *)&stack0xffffffc0,this_00,(MethodInfo *)0x0);
        pSStack_3 = (SubscribableVariableBase_1_System_Single___Class *)pRVar11->m_XMin;
        pMStack_4 = (MonitorData *)pRVar11->m_YMin;
        puStack_5 = (undefined *)pRVar11->m_Width;
        fVar10 = SubscribableVariableBase`1[System::Single]::
                SubscribableVariableBase_1_System_Single__get_Value
                          ((SubscribableVariableBase_1_System_Single_ *)&pSStack_3,
                           (MethodInfo *)0x0);
        if (pRVar6 != (RectTransform *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
          RectTransform_SetSizeWithCurrentAnchors
                    (pRVar6,RectTransform_Axis__Enum_Horizontal,(fVar9 - fVar7) + fVar10,
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


/* Boolean PerformAutoWidth() */

bool Assembly-CSharp.dll::ChatBubble::ChatBubble_PerformAutoWidth
               (ChatBubble *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields).MessageComponent;
  if (pTVar1 != (Text *)0x0) {
    pRVar2 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                       ((Graphic *)pTVar1,(MethodInfo *)0x0);
    if (pRVar2 != (RectTransform *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_rect
                ((Rect *)&stack0xffffffc0,pRVar2,(MethodInfo *)0x0);
      fVar3 = SubscribableVariableBase`1[System::Single]::
              SubscribableVariableBase_1_System_Single__get_Value
                        ((SubscribableVariableBase_1_System_Single_ *)&stack0xffffffe0,
                         (MethodInfo *)0x0);
      pTVar1 = (this->fields).MessageComponent;
      fVar4 = (this->fields).MessageWrapWidth;
      if (pTVar1 != (Text *)0x0) {
        pRVar2 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                           ((Graphic *)pTVar1,(MethodInfo *)0x0);
        b = UnityEngine.UI.dll::UnityEngine::UI::LayoutUtility::LayoutUtility_GetPreferredWidth
                      (pRVar2,(MethodInfo *)0x0);
        if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
          func_?();
        }
        fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Min(fVar4,b,(MethodInfo *)0x0)
        ;
        fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Max
                          (0.0,fVar4,(MethodInfo *)0x0);
        if (fVar3 == fVar4) {
          return 0;
        }
        pRVar2 = ChatBubble_get_rectTransform(this,(MethodInfo *)0x0);
        fVar4 = 0.0;
        this_00 = ChatBubble_get_rectTransform(this,(MethodInfo *)0x0);
        if (this_00 != (RectTransform *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_rect
                    ((Rect *)&stack0xffffffc0,this_00,(MethodInfo *)0x0);
          fVar3 = SubscribableVariableBase`1[System::Single]::
                  SubscribableVariableBase_1_System_Single__get_Value
                            ((SubscribableVariableBase_1_System_Single_ *)&stack0xffffffd0,
                             (MethodInfo *)0x0);
          if (pRVar2 != (RectTransform *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
            RectTransform_SetSizeWithCurrentAnchors
                      (pRVar2,RectTransform_Axis__Enum_Horizontal,
                       ((float)&stack0xffffffd0 - fVar4) + fVar3,(MethodInfo *)0x0);
            return 1;
          }
        }
      }
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  bVar6 = (*pcVar5)();
  return bVar6;
}


/* Void PerformExtenderPosition() */

void Assembly-CSharp.dll::ChatBubble::ChatBubble_PerformExtenderPosition
               (ChatBubble *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  exists = (this->fields).ExtenderComponent;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Implicit
                    ((Object_1 *)exists,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    return;
  }
  this_00 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_main((MethodInfo *)0x0);
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)this_00,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar1 == 0) {
code_?:
    if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_zero
              ((Vector3 *)&stack0xfffffff0,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_zero
              ((Vector3 *)&stack0xffffffd8,(MethodInfo *)0x0);
    pEVar2 = (this->fields).ExtenderBorderInfo;
    if (pEVar2 != (ExtenderBorderInfo__Array *)0x0) {
      uVar3 = (this->fields).ExtenderDock;
      if (uVar3 < pEVar2->max_length) {
        info = pEVar2->vector[uVar3];
        ChatBubble_CalculateExtenderBorderVertices
                  (this,info,(Vector3 *)&stack0xffffffe4,(Vector3 *)&stack0xfffffff0,
                   (MethodInfo *)0x0);
        ChatBubble_SetExtenderAnchorPosToBorder(this,info,(MethodInfo *)0x0);
        return;
      }
      goto code_?;
    }
  }
  else {
    pCVar4 = (this->fields).anchor;
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?();
    }
    bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                      ((Object_1 *)pCVar4,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar1 == 0) goto code_?;
    pCVar4 = (this->fields).anchor;
    if (((pCVar4 != (ChatAnchor *)0x0) &&
        (this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                             ((Component_1 *)pCVar4,(MethodInfo *)0x0), this_01 != (Transform *)0x0)
        ) && (pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                 ((Vector3 *)&stack0xffffffe4,this_01,(MethodInfo *)0x0),
             this_00 != (Camera *)0x0)) {
      pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_WorldToViewportPoint_1
                         ((Vector3 *)&stack0xffffffe4,this_00,*pVVar5,(MethodInfo *)0x0);
      uVar6 = pVVar5->x;
      uVar7 = pVVar5->y;
      if (((pVVar5->z <= 0.0) || ((float)uVar6 <= 0.0)) ||
         ((_UNK_? <= (float)uVar6 ||
          (((float)uVar7 <= 0.0 || (_UNK_? <= (float)uVar7)))))) {
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
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void PerformExtenderSnap() */

void Assembly-CSharp.dll::ChatBubble::ChatBubble_PerformExtenderSnap
               (ChatBubble *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).ExtenderComponent;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?();
  }
  bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Implicit
                    ((Object_1 *)this_00,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    return;
  }
  pIVar2 = (this->fields).ExtenderComponent;
  if (pIVar2 != (Image *)0x0) {
    this_00 = (Image *)UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                                 ((Graphic *)pIVar2,(MethodInfo *)0x0);
    fVar3 = 0.0;
    fVar4 = 0.0;
    func_?();
    if (this_00 != (Image *)0x0) {
      VVar5.y = fVar4;
      VVar5.x = fVar3;
      UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_pivot
                ((RectTransform *)this_00,VVar5,(MethodInfo *)0x0);
      switch((this->fields).ExtenderDock) {
      case 0:
        pIVar2 = (this->fields).ExtenderComponent;
        if (pIVar2 != (Image *)0x0) {
          this_00 = (Image *)UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                                       ((Graphic *)pIVar2,(MethodInfo *)0x0);
          fVar3 = 0.0;
          fVar4 = 0.0;
          func_?();
          pIVar2 = (this->fields).ExtenderComponent;
          if (pIVar2 != (Image *)0x0) {
            pRVar6 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                               ((Graphic *)pIVar2,(MethodInfo *)0x0);
            if (pRVar6 != (RectTransform *)0x0) {
              value.y = fVar4;
              value.x = fVar3;
              UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_anchorMax
                        (pRVar6,value,(MethodInfo *)0x0);
              if (this_00 != (Image *)0x0) {
                value_03.y = fVar4;
                value_03.x = fVar3;
                UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_anchorMin
                          ((RectTransform *)this_00,value_03,(MethodInfo *)0x0);
                pIVar2 = (this->fields).ExtenderComponent;
                if (pIVar2 != (Image *)0x0) {
                  this_00 = (Image *)UnityEngine.UI.dll::UnityEngine::UI::Graphic::
                                     Graphic_get_rectTransform((Graphic *)pIVar2,(MethodInfo *)0x0);
                  if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr &
                       0x2000000) != 0) &&
                     ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
                    func_?();
                  }
                  fVar3 = 0.0;
code_?:
                  pQVar7 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Euler
                                     ((Quaternion *)&stack0xffffffe4,0.0,0.0,fVar3,
                                      (MethodInfo *)0x0);
                  if (this_00 != (Image *)0x0) {
                    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
                              ((Transform *)this_00,*pQVar7,(MethodInfo *)0x0);
                    goto code_?;
                  }
                }
              }
            }
          }
        }
        break;
      case 1:
        pIVar2 = (this->fields).ExtenderComponent;
        if (pIVar2 != (Image *)0x0) {
          this_00 = (Image *)UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                                       ((Graphic *)pIVar2,(MethodInfo *)0x0);
          fVar3 = 0.0;
          fVar4 = 0.0;
          func_?();
          pIVar2 = (this->fields).ExtenderComponent;
          if (pIVar2 != (Image *)0x0) {
            pRVar6 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                               ((Graphic *)pIVar2,(MethodInfo *)0x0);
            if (pRVar6 != (RectTransform *)0x0) {
              value_00.y = fVar4;
              value_00.x = fVar3;
              UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_anchorMax
                        (pRVar6,value_00,(MethodInfo *)0x0);
              if (this_00 != (Image *)0x0) {
                value_04.y = fVar4;
                value_04.x = fVar3;
                UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_anchorMin
                          ((RectTransform *)this_00,value_04,(MethodInfo *)0x0);
                pIVar2 = (this->fields).ExtenderComponent;
                if (pIVar2 != (Image *)0x0) {
                  this_00 = (Image *)UnityEngine.UI.dll::UnityEngine::UI::Graphic::
                                     Graphic_get_rectTransform((Graphic *)pIVar2,(MethodInfo *)0x0);
                  if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr &
                       0x2000000) != 0) &&
                     ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
                    func_?();
                  }
                  fVar3 = -90.0;
code_?:
                  pQVar7 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Euler
                                     ((Quaternion *)&stack0xffffffe4,0.0,0.0,fVar3,
                                      (MethodInfo *)0x0);
                  if (this_00 != (Image *)0x0) {
                    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localRotation
                              ((Transform *)this_00,*pQVar7,(MethodInfo *)0x0);
                    goto code_?;
                  }
                }
              }
            }
          }
        }
        break;
      case 2:
        pIVar2 = (this->fields).ExtenderComponent;
        if (pIVar2 != (Image *)0x0) {
          this_00 = (Image *)UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                                       ((Graphic *)pIVar2,(MethodInfo *)0x0);
          fVar3 = 0.0;
          fVar4 = 0.0;
          func_?();
          pIVar2 = (this->fields).ExtenderComponent;
          if (pIVar2 != (Image *)0x0) {
            pRVar6 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                               ((Graphic *)pIVar2,(MethodInfo *)0x0);
            if (pRVar6 != (RectTransform *)0x0) {
              value_01.y = fVar4;
              value_01.x = fVar3;
              UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_anchorMax
                        (pRVar6,value_01,(MethodInfo *)0x0);
              if (this_00 != (Image *)0x0) {
                value_05.y = fVar4;
                value_05.x = fVar3;
                UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_anchorMin
                          ((RectTransform *)this_00,value_05,(MethodInfo *)0x0);
                pIVar2 = (this->fields).ExtenderComponent;
                if (pIVar2 != (Image *)0x0) {
                  this_00 = (Image *)UnityEngine.UI.dll::UnityEngine::UI::Graphic::
                                     Graphic_get_rectTransform((Graphic *)pIVar2,(MethodInfo *)0x0);
                  if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr &
                       0x2000000) != 0) &&
                     ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
                    func_?();
                  }
                  fVar3 = 90.0;
                  goto code_?;
                }
              }
            }
          }
        }
        break;
      case 3:
        pIVar2 = (this->fields).ExtenderComponent;
        if (pIVar2 != (Image *)0x0) {
          this_00 = (Image *)UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                                       ((Graphic *)pIVar2,(MethodInfo *)0x0);
          fVar3 = 0.0;
          fVar4 = 0.0;
          func_?();
          pIVar2 = (this->fields).ExtenderComponent;
          if (pIVar2 != (Image *)0x0) {
            pRVar6 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                               ((Graphic *)pIVar2,(MethodInfo *)0x0);
            if (pRVar6 != (RectTransform *)0x0) {
              value_02.y = fVar4;
              value_02.x = fVar3;
              UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_anchorMax
                        (pRVar6,value_02,(MethodInfo *)0x0);
              if (this_00 != (Image *)0x0) {
                value_06.y = fVar4;
                value_06.x = fVar3;
                UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_anchorMin
                          ((RectTransform *)this_00,value_06,(MethodInfo *)0x0);
                pIVar2 = (this->fields).ExtenderComponent;
                if (pIVar2 != (Image *)0x0) {
                  this_00 = (Image *)UnityEngine.UI.dll::UnityEngine::UI::Graphic::
                                     Graphic_get_rectTransform((Graphic *)pIVar2,(MethodInfo *)0x0);
                  if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr &
                       0x2000000) != 0) &&
                     ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
                    func_?();
                  }
                  fVar3 = 180.0;
                  goto code_?;
                }
              }
            }
          }
        }
        break;
      default:
code_?:
        pIVar2 = (this->fields).ExtenderComponent;
        if (pIVar2 != (Image *)0x0) {
          bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_get_enabled
                            ((Behaviour *)pIVar2,(MethodInfo *)0x0);
          if (bVar1 == 0) {
code_?:
            pIVar2 = (this->fields).ExtenderComponent;
            if (pIVar2 != (Image *)0x0) {
              bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_get_enabled
                                ((Behaviour *)pIVar2,(MethodInfo *)0x0);
              if (bVar1 != 0) {
                return;
              }
              pEVar8 = (this->fields).ExtenderBorderInfo;
              if (pEVar8 != (ExtenderBorderInfo__Array *)0x0) {
                uVar9 = (this->fields).ExtenderDock;
                if (pEVar8->max_length <= uVar9) goto code_?;
                if (pEVar8->vector[uVar9] != (ExtenderBorderInfo *)0x0) {
                  if ((pEVar8->vector[uVar9]->fields).Enabled == 0) {
                    return;
                  }
                  pIVar2 = (this->fields).ExtenderComponent;
                  if (pIVar2 != (Image *)0x0) {
                    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                              ((Behaviour *)pIVar2,1,(MethodInfo *)0x0);
                    return;
                  }
                }
              }
            }
          }
          else {
            pEVar8 = (this->fields).ExtenderBorderInfo;
            if (pEVar8 != (ExtenderBorderInfo__Array *)0x0) {
              uVar9 = (this->fields).ExtenderDock;
              if (uVar9 < pEVar8->max_length) {
                if (pEVar8->vector[uVar9] != (ExtenderBorderInfo *)0x0) {
                  if ((pEVar8->vector[uVar9]->fields).Enabled != 0) goto code_?;
                  pIVar2 = (this->fields).ExtenderComponent;
                  if (pIVar2 != (Image *)0x0) {
                    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                              ((Behaviour *)pIVar2,0,(MethodInfo *)0x0);
                    return;
                  }
                }
              }
              else {
                func_?();
                func_?();
              }
            }
          }
        }
      }
    }
  }
  func_?();
code_?:
  uVar10 = 0;
  this_01 = (ChatBubble *)0x0;
  func_?();
  Var11 = func_?();
  f2xm1(Var11);
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  fStack_11 = 0.0;
  puStack_12 = (undefined *)0x0;
  pTVar13 = (this_01->fields).MessageComponent;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object,this_00,this);
  }
  bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Implicit
                    ((Object_1 *)pTVar13,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    pTVar13 = (this_01->fields).MessageComponent;
    if (pTVar13 != (Text *)0x0) {
      uVar14 = (*(code *)(pTVar13->klass->vtable).get_text.method)
                        (pTVar13,(pTVar13->klass->vtable).set_text.methodPtr);
      pTVar13 = (this_01->fields).MessageComponent;
      if (pTVar13 != (Text *)0x0) {
        (*(code *)(pTVar13->klass->vtable).set_text.method)
                  (pTVar13,uVar10,(pTVar13->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr)
        ;
        ChatBubble_PerformAutoSize(this_01,(MethodInfo *)0x0);
        pTVar13 = (this_01->fields).MessageComponent;
        if ((pTVar13 != (Text *)0x0) &&
           (pRVar6 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                               ((Graphic *)pTVar13,(MethodInfo *)0x0), pRVar6 != (RectTransform *)0x0
           )) {
          pRVar15 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_rect
                              ((Rect *)&stack0xffffffc0,pRVar6,(MethodInfo *)0x0);
          fStack_11 = pRVar15->m_XMin;
          puStack_12 = (undefined *)pRVar15->m_YMin;
          VVar5 = (Vector2)func_?(&fStack_11,0);
          pTVar13 = (this_01->fields).MessageComponent;
          (this_01->fields).MessageMinimumSize = VVar5;
          if (pTVar13 != (Text *)0x0) {
            (*(code *)(pTVar13->klass->vtable).set_text.method)
                      (pTVar13,uVar14,
                       (pTVar13->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
            return;
          }
        }
      }
    }
    func_?(0);
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  fStack_1 = 0.0;
  fStack_2 = 0.0;
  fStack_3 = 0.0;
  fStack_4 = 0.0;
  fStack_5 = (this->fields).MessageMinimumSize.x;
  pTVar6 = (this->fields).MessageComponent;
  fStack_7 = (this->fields).MessageMinimumSize.y;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar8 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Implicit
                    ((Object_1 *)pTVar6,(MethodInfo *)0x0);
  if (bVar8 != 0) {
    pTVar6 = (this->fields).MessageComponent;
    if (pTVar6 != (Text *)0x0) {
      uVar9 = (*(code *)(pTVar6->klass->vtable).get_text.method)
                        (pTVar6,(pTVar6->klass->vtable).set_text.methodPtr);
      pTVar6 = (this->fields).MessageComponent;
      if (pTVar6 != (Text *)0x0) {
        (*(code *)(pTVar6->klass->vtable).set_text.method)
                  (pTVar6,value,(pTVar6->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
        ChatBubble_PerformAutoSize(this,(MethodInfo *)0x0);
        pTVar6 = (this->fields).MessageComponent;
        if (pTVar6 != (Text *)0x0) {
          this_00 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                              ((Graphic *)pTVar6,(MethodInfo *)0x0);
          if (this_00 != (RectTransform *)0x0) {
            pRVar10 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_rect
                               ((Rect *)auStack_11,this_00,(MethodInfo *)0x0);
            fStack_1 = pRVar10->m_XMin;
            fStack_2 = pRVar10->m_YMin;
            fStack_3 = pRVar10->m_Width;
            fStack_4 = pRVar10->m_Height;
            join_0x00000008_0x00000000_ = (Vector2)func_?(&fStack_1,0);
            pTVar6 = (this->fields).MessageComponent;
            (this->fields).MessageMinimumSize = join_0x00000008_0x00000000_;
            if (pTVar6 != (Text *)0x0) {
              (*(code *)(pTVar6->klass->vtable).set_text.method)
                        (pTVar6,uVar9,
                         (pTVar6->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
              goto code_?;
            }
          }
        }
      }
    }
    func_?(0);
    pcVar12 = (code *)swi(3);
    VVar13 = (Vector2)(*pcVar12)();
    return VVar13;
  }
code_?:
  VVar13.y = fStack_7;
  VVar13.x = fStack_5;
  return VVar13;
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
      this_01 = (Collection_1_VoxelHit_ *)(this->fields).MessageValue;
      if (this_01 != (Collection_1_VoxelHit_ *)0x0) {
        pIVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                 Collection_1_VoxelHit__get_Items(this_01,(MethodInfo *)0x0);
        fVar1 = (float)(int)pIVar2 / _UNK_? + fVar1 + _UNK_?;
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
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  switch((this->fields).ExtenderDock) {
  case 0:
    pIVar1 = (this->fields).ExtenderComponent;
    if (pIVar1 == (Image *)0x0) goto code_?;
    this_00 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                        ((Graphic *)pIVar1,(MethodInfo *)0x0);
    pIVar1 = (this->fields).ExtenderComponent;
    if (((pIVar1 == (Image *)0x0) ||
        (pRVar2 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                            ((Graphic *)pIVar1,(MethodInfo *)0x0), pRVar2 == (RectTransform *)0x0))
       || (UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
           RectTransform_get_anchoredPosition(pRVar2,(MethodInfo *)0x0),
          info == (ExtenderBorderInfo *)0x0)) goto code_?;
    fVar3 = (info->fields).Margin;
    goto code_?;
  case 1:
    pIVar1 = (this->fields).ExtenderComponent;
    if ((pIVar1 == (Image *)0x0) ||
       (this_00 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                            ((Graphic *)pIVar1,(MethodInfo *)0x0), info == (ExtenderBorderInfo *)0x0
       )) goto code_?;
    fVar4 = (info->fields).Margin;
    pIVar1 = (this->fields).ExtenderComponent;
    if ((pIVar1 == (Image *)0x0) ||
       (pRVar2 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                           ((Graphic *)pIVar1,(MethodInfo *)0x0), pRVar2 == (RectTransform *)0x0))
    goto code_?;
    VVar5 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
            RectTransform_get_anchoredPosition(pRVar2,(MethodInfo *)0x0);
    fVar3 = VVar5.y;
    break;
  case 2:
    pIVar1 = (this->fields).ExtenderComponent;
    if ((pIVar1 == (Image *)0x0) ||
       (this_00 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                            ((Graphic *)pIVar1,(MethodInfo *)0x0), info == (ExtenderBorderInfo *)0x0
       )) goto code_?;
    fVar4 = (info->fields).Margin;
    pIVar1 = (this->fields).ExtenderComponent;
    if ((pIVar1 == (Image *)0x0) ||
       (pRVar2 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                           ((Graphic *)pIVar1,(MethodInfo *)0x0), pRVar2 == (RectTransform *)0x0))
    goto code_?;
    VVar5 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
            RectTransform_get_anchoredPosition(pRVar2,(MethodInfo *)0x0);
    fVar3 = VVar5.y;
    fVar4 = (float)((uint)fVar4 ^ _UNK_?);
    break;
  case 3:
    pIVar1 = (this->fields).ExtenderComponent;
    if (pIVar1 == (Image *)0x0) goto code_?;
    this_00 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                        ((Graphic *)pIVar1,(MethodInfo *)0x0);
    pIVar1 = (this->fields).ExtenderComponent;
    if (((pIVar1 == (Image *)0x0) ||
        (pRVar2 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                            ((Graphic *)pIVar1,(MethodInfo *)0x0), pRVar2 == (RectTransform *)0x0))
       || (UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
           RectTransform_get_anchoredPosition(pRVar2,(MethodInfo *)0x0),
          info == (ExtenderBorderInfo *)0x0)) goto code_?;
    fVar3 = (float)((uint)(info->fields).Margin ^ _UNK_?);
code_?:
    fVar4 = 0.0;
    break;
  default:
    goto code_?;
  }
  uVar6 = CONCAT44(fVar3,fVar4);
  func_?(&stack0xffffffe8);
  if ((((uint)(TypeInfo__UnityEngine__Vector2->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector2->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Vector2);
  }
  v.z = 0.0;
  v.x = (float)(int)uVar6;
  v.y = (float)(int)(uVar6 >> 0x20);
  VVar5 = UnityEngine.CoreModule.dll::UnityEngine::Vector2::Vector2_op_Implicit(v,(MethodInfo *)0x0)
  ;
  if (this_00 == (RectTransform *)0x0) {
code_?:
    func_?(0);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_anchoredPosition
            (this_00,VVar5,(MethodInfo *)0x0);
code_?:
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::ChatBubble::ChatBubble_Update(ChatBubble *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  ChatBubble_PerformExtenderPosition(this,(MethodInfo *)0x0);
  pCVar1 = (this->fields).anchor;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_01 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((this_01 == (MVNetworkGame *)0x0) ||
     (this_02 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_01,(MethodInfo *)0x0),
     this_02 == (MVLocalPlayer *)0x0)) {
code_?:
    func_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  bVar2 = MVPlayer::MVPlayer_get_IsReady((MVPlayer *)this_02,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    pCVar3 = (this->fields).anchor;
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?();
    }
    bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                      ((Object_1 *)pCVar3,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar2 == 0) {
      pCVar3 = (this->fields).anchor;
      if ((pCVar3 != (ChatAnchor *)0x0) &&
         (this_03 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                              ((Component_1 *)pCVar3,(MethodInfo *)0x0), this_03 != (Transform *)0x0
         )) {
        pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                           ((Vector3 *)&stack0xfffffff0,this_03,(MethodInfo *)0x0);
        uVar5 = pVVar4->x;
        fVar6 = pVVar4->z;
        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
          func_?();
        }
        this_04 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                            ((MethodInfo *)0x0);
        if (this_04 != (SpawnRoleDataMediator *)0x0) {
          s = (SpawnRoleVariable_1_UnityEngine_Vector3_ *)
              PlayerListsLayout+<CreatePlayerLists>c__Iterator0::
              PlayerListsLayout_CreatePlayerLists_c_Iterator0_System_Collections_IEnumerator_get_Current
                        ((PlayerListsLayout_CreatePlayerLists_c_Iterator0 *)this_04,
                         (MethodInfo *)0x0);
          pVVar4 = Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
                   SpawnRoleVariableTypes::SpawnRoleVariable`1[UnityEngine::Vector3]::
                   SpawnRoleVariable_1_UnityEngine_Vector3__op_Implicit
                             ((Vector3 *)&stack0xffffffd0,s,
                              MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<UnityEngine::Vector3>__op_Implicit_MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<UnityEngine::Vector3>_
                             );
          uVar7._0_4_ = pVVar4->x;
          uVar7._4_4_ = pVVar4->y;
          fVar8 = pVVar4->z;
          if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
            func_?();
          }
          a.y = (float)&UNK_?;
          a.x = (float)uVar5;
          a.z = fVar6;
          b.z = fVar8;
          b.x = (float)(int)uVar7;
          b.y = (float)(int)((ulonglong)uVar7 >> 0x20);
          UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                    ((Vector3 *)&stack0xffffffd0,a,b,(MethodInfo *)0x0);
          fVar9 = (float10)func_?();
          if ((float)fVar9 <= _UNK_?) {
            return;
          }
          this_00 = (this->fields).CanvasGroup;
          if (this_00 != (CanvasGroup *)0x0) {
            UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                      (this_00,(_UNK_? - (float)fVar9) / _UNK_?,(MethodInfo *)0x0);
            return;
          }
        }
      }
      goto code_?;
    }
  }
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
  uStack_1 = 0;
  func_?(&uStack_1,0x42700000,0x41f00000,0);
  (this->fields).MessageMinimumSize.x = (float)uStack_1;
  (this->fields).MessageMinimumSize.y = uStack_1._4_4_;
  (this->fields).MessageWrapWidth = 300.0;
  (this->fields).isActive = 1;
  UnityEngine.UIModule.dll::UnityEngine::Canvas::Canvas__ctor((Canvas *)this,(MethodInfo *)0x0);
  return;
}


/* Boolean get_IsActive() */

bool Assembly-CSharp.dll::ChatBubble::ChatBubble_get_IsActive(ChatBubble *this,MethodInfo *method)

{
  return (this->fields).isActive;
}


/* RectTransform get_rectTransform() */

RectTransform *
Assembly-CSharp.dll::ChatBubble::ChatBubble_get_rectTransform(ChatBubble *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  exists = (this->fields)._rectTransform;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Implicit
                    ((Object_1 *)exists,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    pMVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_GetComponent_58
                       ((Component_1 *)this,
                        UnityEngine__RectTransform_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::RectTransform>__
                       );
    (this->fields)._rectTransform = (RectTransform *)pMVar2;
  }
  return (this->fields)._rectTransform;
}

