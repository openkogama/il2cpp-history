
/* Void Awake() */

void Assembly-CSharp.dll::BlinkerBase::BlinkerBase_Awake(BlinkerBase *this,MethodInfo *method)

{
  pCVar1 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_main((MethodInfo *)0x0);
  (this->fields).targetCamera = pCVar1;
  return;
}


/* Void DoBlinking() */

void Assembly-CSharp.dll::BlinkerBase::BlinkerBase_DoBlinking(BlinkerBase *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  func_?();
  if ((((this->fields).visible != 0) &&
      (this_05 = (this->fields).blinkers, this_05 != (Dictionary_2_BlinkType_Blinker_ *)0x0)) &&
     (pDVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[WinningConditionType,System
               ::Object]::Dictionary_2_WinningConditionType_System_Object__get_Values
                         ((Dictionary_2_WinningConditionType_System_Object_ *)this_05,
                          MethodInfo__System__Collections__Generic__Dictionary<BlinkType,_Blinker>__get_Values__
                         ),
     pDVar4 != (Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object_ *)0x0))
  {
    this_00 = (this->fields).blinkers;
    if ((this_00 == (Dictionary_2_BlinkType_Blinker_ *)0x0) ||
       (this_01 = (Dictionary_2_TKey_TValue_ValueCollection_ChatCommand_System_Object_ *)
                  mscorlib.dll::System::Collections::Generic::
                  Dictionary`2[WinningConditionType,System::Object]::
                  Dictionary_2_WinningConditionType_System_Object__get_Values
                            ((Dictionary_2_WinningConditionType_System_Object_ *)this_00,
                             MethodInfo__System__Collections__Generic__Dictionary<BlinkType,_Blinker>__get_Values__
                            ),
       this_01 == (Dictionary_2_TKey_TValue_ValueCollection_ChatCommand_System_Object_ *)0x0)) {
code_?:
      func_?();
      func_?();
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    method_00 = (MethodInfo *)&UNK_?;
    mscorlib.dll::System::Collections::Generic::
    Dictionary`2[TKey,TValue]+ValueCollection[ChatCommand,System::Object]::
    Dictionary_2_TKey_TValue_ValueCollection_ChatCommand_System_Object__GetEnumerator
              ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_ChatCommand_System_Object_
                *)&stack0xffffffac,this_01,
               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<BlinkType,_Blinker>__GetEnumerator__
              );
    uStack_1 = 0;
    while (cVar6 = func_?(), cVar6 != '\0') {
      this_02 = (Blinker *)func_?();
      if (this_02 == (Blinker *)0x0) goto code_?;
      fVar7 = (this_02->fields).blinkStartTime;
      fVar8 = (this_02->fields).blinkDuration;
      fVar9 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
      if (fVar9 <= fVar8 + fVar7) {
        func_?();
        pMVar10 = (this->fields).meshFilters;
        if (pMVar10 != (MeshFilter__Array *)0x0) {
          iVar11 = 0;
          while( true ) {
            if (pMVar10 == (MeshFilter__Array *)0x0) goto code_?;
            if ((int)pMVar10->max_length <= iVar11) break;
            this_03 = (MeshFilter *)func_?();
            if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
              func_?(TypeInfo__UnityEngine__Object);
            }
            bVar12 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                              ((Object_1 *)this_03,(Object_1 *)0x0,(MethodInfo *)0x0);
            if (bVar12 == 0) {
              if ((this_03 == (MeshFilter *)0x0) ||
                 (this_04 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                            Component_1_get_gameObject((Component_1 *)this_03,(MethodInfo *)this_05)
                 , this_04 == (GameObject *)0x0)) goto code_?;
              this_05 = (Dictionary_2_BlinkType_Blinker_ *)&UNK_?;
              bVar12 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                      GameObject_get_activeInHierarchy(this_04,method_00);
              if (bVar12 != 0) {
                tfm = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                                ((Component_1 *)this_03,(MethodInfo *)0x0);
                mesh = UnityEngine.CoreModule.dll::UnityEngine::MeshFilter::
                       MeshFilter_get_sharedMesh(this_03,(MethodInfo *)0x0);
                if (this_02 == (Blinker *)0x0) goto code_?;
                method_00 = (MethodInfo *)&UNK_?;
                Blinker::Blinker_Draw
                          (this_02,mesh,tfm,(this->fields).targetCamera,(this->fields).layerMask,
                           (MethodInfo *)0x0);
              }
            }
            iVar11 = iVar11 + 1;
          }
        }
      }
    }
    uStack_1 = 0xffffffff;
    func_?();
  }
  *unaff_FS_OFFSET = uStack_3;
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::BlinkerBase::BlinkerBase_OnDestroy(BlinkerBase *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffb0;
  puVar5 = &stack0xffffffb0;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  pOStack_6 = (Object *)0x0;
  pDStack_7 = (Dictionary_2_ChatCommand_System_Object_ *)0x0;
  iStack_8 = 0;
  iStack_9 = 0;
  iStack_10 = 0;
  func_?();
  this_00 = (this->fields).blinkers;
  puStack_11 = (undefined4 *)&stack0xffffffb0;
  puStack_4 = &stack0xffffffb0;
  if ((this_00 != (Dictionary_2_BlinkType_Blinker_ *)0x0) &&
     (puStack_11 = (undefined4 *)&stack0xffffffb0, puStack_4 = &stack0xffffffb0,
     this_01 = (Dictionary_2_TKey_TValue_ValueCollection_ChatCommand_System_Object_ *)
               mscorlib.dll::System::Collections::Generic::Dictionary`2[WinningConditionType,System
               ::Object]::Dictionary_2_WinningConditionType_System_Object__get_Values
                         ((Dictionary_2_WinningConditionType_System_Object_ *)this_00,
                          MethodInfo__System__Collections__Generic__Dictionary<BlinkType,_Blinker>__get_Values__
                         ),
     this_01 != (Dictionary_2_TKey_TValue_ValueCollection_ChatCommand_System_Object_ *)0x0)) {
    pDVar12 = mscorlib.dll::System::Collections::Generic::
             Dictionary`2[TKey,TValue]+ValueCollection[ChatCommand,System::Object]::
             Dictionary_2_TKey_TValue_ValueCollection_ChatCommand_System_Object__GetEnumerator
                       (&DStack_13,this_01,
                        MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<BlinkType,_Blinker>__GetEnumerator__
                       );
    pDStack_7 = (pDVar12->host_enumerator).dictionary;
    iStack_8 = (pDVar12->host_enumerator).next;
    iStack_9 = (pDVar12->host_enumerator).stamp;
    iStack_10 = (pDVar12->host_enumerator).current.key;
    pOStack_6 = (pDVar12->host_enumerator).current.value;
    uStack_1 = 0;
    while( true ) {
      cVar14 = func_?();
      if (cVar14 == '\0') {
        *puStack_11 = 0x43;
        uStack_1 = 0xffffffff;
        func_?();
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
      iVar15 = func_?();
      if (iVar15 == 0) break;
      if (cRam_? == '\0') {
        func_?(_UNK_?);
        cRam_? = '\x01';
      }
      pOVar16 = *(Object_1 **)(iVar15 + 8);
      if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      bVar17 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                        (pOVar16,(Object_1 *)0x0,(MethodInfo *)0x0);
      if (bVar17 != 0) {
        pOVar16 = *(Object_1 **)(iVar15 + 8);
        if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                  (pOVar16,(MethodInfo *)0x0);
      }
    }
  }
  func_?(0);
  func_?();
  pcVar18 = (code *)swi(3);
  (*pcVar18)();
  return;
}


/* Void StartBlinking(BlinkType, Single) */

void Assembly-CSharp.dll::BlinkerBase::BlinkerBase_StartBlinking
               (BlinkerBase *this,BlinkType__Enum type,float duration,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).blinkers;
  if (this_00 != (Dictionary_2_BlinkType_Blinker_ *)0x0) {
    pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[BlinkType,System::Object]::
             Dictionary_2_BlinkType_System_Object__get_Item
                       ((Dictionary_2_BlinkType_System_Object_ *)this_00,type,
                        MethodInfo__System__Collections__Generic__Dictionary<BlinkType,_Blinker>__get_Item_BlinkType_
                       );
    if (pOVar1 != (Object *)0x0) {
      pMVar2 = (MonitorData *)
               UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
      pOVar1[1].monitor = pMVar2;
      pOVar1[2].klass = (Object__Class *)duration;
      return;
    }
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void StopBlinking(BlinkType) */

void Assembly-CSharp.dll::BlinkerBase::BlinkerBase_StopBlinking
               (BlinkerBase *this,BlinkType__Enum type,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).blinkers;
  if (this_00 != (Dictionary_2_BlinkType_Blinker_ *)0x0) {
    pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[BlinkType,System::Object]::
             Dictionary_2_BlinkType_System_Object__get_Item
                       ((Dictionary_2_BlinkType_System_Object_ *)this_00,type,
                        MethodInfo__System__Collections__Generic__Dictionary<BlinkType,_Blinker>__get_Item_BlinkType_
                       );
    if (pOVar1 != (Object *)0x0) {
      pOVar1[2].klass = (Object__Class *)0x0;
      pOVar1[1].monitor = (MonitorData *)0x0;
      return;
    }
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

