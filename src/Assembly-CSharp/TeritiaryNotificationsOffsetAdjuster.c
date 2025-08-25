
/* Void OnIsPausedStateChange(Boolean) */

void Assembly-CSharp.dll::TeritiaryNotificationsOffsetAdjuster::
     TeritiaryNotificationsOffsetAdjuster_OnIsPausedStateChange
               (TeritiaryNotificationsOffsetAdjuster *this,bool isPaused,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__RectTransform);
    cRam_? = '\x01';
  }
  pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                     ((Component *)this,(MethodInfo *)0x0);
  this_00 = (Transform *)0x0;
  if (isPaused == 0) {
    if ((pTVar1 != (Transform *)0x0) &&
       (pTVar1->klass == (Transform__Class *)TypeInfo__UnityEngine__RectTransform)) {
      this_00 = pTVar1;
    }
    fVar2 = (this->fields).topPaddingInGame;
  }
  else {
    if ((pTVar1 != (Transform *)0x0) &&
       (pTVar1->klass == (Transform__Class *)TypeInfo__UnityEngine__RectTransform)) {
      this_00 = pTVar1;
    }
    fVar2 = (this->fields).topPaddingInMenu;
  }
  if (this_00 != (Transform *)0x0) {
    VVar3 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
            RectTransform_get_anchoredPosition((RectTransform *)this_00,(MethodInfo *)0x0);
    value.y = (float)((uint)fVar2 ^
                     __074CDE7ED9B4DD51ACEEEE1729962EC36F0ADC004BF728B1521333CB241590DE_Field);
    value.x = VVar3.x;
    UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_anchoredPosition
              ((RectTransform *)this_00,value,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::TeritiaryNotificationsOffsetAdjuster::
     TeritiaryNotificationsOffsetAdjuster_Start
               (TeritiaryNotificationsOffsetAdjuster *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<bool>);
    func_?(&TypeInfo__IPlayModeUI);
    func_?(&MethodInfo__TeritiaryNotificationsOffsetAdjuster__OnIsPausedStateChange_bool_);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVGameControllerBase);
    cRam_? = '\x01';
  }
  pIVar1 = TypeInfo__MVGameControllerBase->static_fields->_PlayModeUI_k__BackingField;
  if (pIVar1 != (IPlayModeUI *)0x0) {
    cVar2 = func_?(5,TypeInfo__IPlayModeUI,pIVar1);
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__RectTransform);
      cRam_? = '\x01';
    }
    pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)this,(MethodInfo *)0x0);
    this_01 = (Transform *)0x0;
    if (cVar2 == '\0') {
      if ((pTVar3 != (Transform *)0x0) &&
         (pTVar3->klass == (Transform__Class *)TypeInfo__UnityEngine__RectTransform)) {
        this_01 = pTVar3;
      }
      fVar4 = (this->fields).topPaddingInGame;
    }
    else {
      if ((pTVar3 != (Transform *)0x0) &&
         (pTVar3->klass == (Transform__Class *)TypeInfo__UnityEngine__RectTransform)) {
        this_01 = pTVar3;
      }
      fVar4 = (this->fields).topPaddingInMenu;
    }
    unaff_ESI = (Delegate *)0x0;
    unaff_EDI = (Action_1_Boolean___Class *)this;
    if (this_01 != (Transform *)0x0) {
      VVar5 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
               RectTransform_get_anchoredPosition((RectTransform *)this_01,(MethodInfo *)0x0);
      value.y = (float)((uint)fVar4 ^
                       __074CDE7ED9B4DD51ACEEEE1729962EC36F0ADC004BF728B1521333CB241590DE_Field);
      value.x = VVar5.x;
      UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_anchoredPosition
                ((RectTransform *)this_01,value,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        func_?(&TypeInfo__MVGameControllerBase);
        cRam_? = '\x01';
      }
      pDVar6 = (Delegate *)
               TypeInfo__MVGameControllerBase->static_fields->_PlayModeUI_k__BackingField;
      unaff_ESI = (Delegate *)0x0;
      if (pDVar6 != (Delegate *)0x0) {
        pDVar7 = pDVar6->klass;
        uVar8 = 0;
        uVar9._0_1_ = (pDVar7->_1).rank;
        uVar9._1_1_ = (pDVar7->_1).minimumAlignment;
        pDVar10 = pDVar6;
        if (uVar9 != 0) {
          do {
            if (pDVar7->interfaceOffsets[uVar8].interfaceType ==
                (Il2CppClass *)TypeInfo__IPlayModeUI) {
              ppMVar11 = &(&(pDVar6->klass->vtable).ToString)
                         [pDVar6->klass->interfaceOffsets[uVar8].offset].method;
              goto code_?;
            }
            uVar8 = uVar8 + 1;
          } while (uVar8 < uVar9);
        }
        ppMVar11 = (MethodInfo **)func_?(pDVar6,TypeInfo__IPlayModeUI,3);
code_?:
        pDVar6 = (Delegate *)(*(code *)*ppMVar11)(pDVar6,ppMVar11[1]);
        this_00 = (UnityAction_1_System_Int32Enum_ *)func_?(TypeInfo__System__Action<bool>)
        ;
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
        UnityAction_1_System_Int32Enum___ctor
                  (this_00,(Object *)this,
                   MethodInfo__TeritiaryNotificationsOffsetAdjuster__OnIsPausedStateChange_bool_,
                   (MethodInfo *)0x0);
        unaff_ESI = mscorlib.dll::System::Delegate::Delegate_Combine
                              (pDVar6,(Delegate *)this_00,(MethodInfo *)0x0);
        unaff_EDI = TypeInfo__System__Action<bool>;
        if (unaff_ESI == (Delegate *)0x0) {
          iVar12 = 0;
code_?:
          uVar9 = 0;
          pDVar7 = pDVar10->klass;
          uVar8._0_1_ = (pDVar7->_1).rank;
          uVar8._1_1_ = (pDVar7->_1).minimumAlignment;
          if (uVar8 != 0) {
            do {
              if (pDVar7->interfaceOffsets[uVar9].interfaceType ==
                  (Il2CppClass *)TypeInfo__IPlayModeUI) {
                pDVar7 = pDVar10->klass;
                iVar13 = pDVar7->interfaceOffsets[uVar9].offset;
                (*(code *)(&(pDVar7->vtable).Clone)[iVar13].method)
                          (pDVar10,iVar12,(&(pDVar7->vtable).GetObjectData)[iVar13].methodPtr);
                return;
              }
              uVar9 = uVar9 + 1;
            } while (uVar9 < uVar8);
          }
          pDVar6 = pDVar10;
          puVar14 = (undefined4 *)func_?(pDVar10,TypeInfo__IPlayModeUI,4);
          (*(code *)*puVar14)(pDVar10,pDVar6,puVar14[1]);
          return;
        }
        pDVar10 = unaff_ESI;
        iVar12 = func_?(unaff_ESI,TypeInfo__System__Action<bool>);
        if (iVar12 != 0) goto code_?;
        goto code_?;
      }
    }
  }
  func_?();
code_?:
  func_?(unaff_ESI,unaff_EDI);
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}


/* TeritiaryNotificationsOffsetAdjuster() */

void Assembly-CSharp.dll::TeritiaryNotificationsOffsetAdjuster::
     TeritiaryNotificationsOffsetAdjuster__ctor
               (TeritiaryNotificationsOffsetAdjuster *this,MethodInfo *method)

{
  (this->fields).topPaddingInMenu = 40.0;
  (this->fields).topPaddingInGame = 190.0;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  return;
}

