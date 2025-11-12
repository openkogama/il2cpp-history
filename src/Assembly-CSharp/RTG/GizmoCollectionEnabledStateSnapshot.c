
/* Void Apply() */

void Assembly-CSharp.dll::RTG::GizmoCollectionEnabledStateSnapshot::
     GizmoCollectionEnabledStateSnapshot_Apply
               (GizmoCollectionEnabledStateSnapshot *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__Dictionary<RTG::Gizmo,_bool>__Clear__);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<RTG::Gizmo,_bool>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<RTG::Gizmo,_bool>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<RTG::Gizmo,_bool>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<RTG::Gizmo,_bool>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<RTG::Gizmo,_bool>__get_Key__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<RTG::Gizmo,_bool>__get_Value__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDVar1 = (this->fields)._gizmoToState;
  if (pDVar1 != (Dictionary_2_RTG_Gizmo_System_Boolean_ *)0x0) {
    uStack_2 = 0;
    uStack_3 = 0;
    if (iRam_? != 0) {
      uVar4 = (uint)((ulonglong)&pDStack_5 >> 0xc);
      puVar6 = (ulonglong *)((ulonglong)((uVar4 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar7 = *puVar6;
        LOCK();
        uVar8 = *puVar6;
        if (uVar7 == uVar8) {
          *puVar6 = uVar7 | 1L << (uVar4 & 0x3f);
        }
        UNLOCK();
      } while (uVar7 != uVar8);
    }
    uStack_9 = (ulonglong)(uint)(pDVar1->fields)._version;
    uStack_10 = 2;
    DStack_11._version = (undefined4)uStack_9;
    DStack_11._index = uStack_9._4_4_;
    DStack_11._current.key = (Object *)0x0;
    DStack_11._current.value = 0;
    DStack_11._current._9_7_ = 0;
    DStack_11._getEnumeratorRetType = 2;
    DStack_11._36_4_ = 0;
    pDStack_5 = pDVar1;
    DStack_11._dictionary = (Dictionary_2_System_Object_System_Boolean_ *)pDVar1;
    while (bVar12 = mscorlib.dll::System::Collections::Generic::
                   Dictionary`2[TKey,TValue]+Enumerator[System::Object,System::Boolean]::
                   Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Boolean__MoveNext
                             (&DStack_11,
                              MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<RTG::Gizmo,_bool>__MoveNext__
                             ), bVar12 != 0) {
      if ((Gizmo *)DStack_11._current.key == (Gizmo *)0x0) goto code_?;
      Gizmo::Gizmo_SetEnabled
                ((Gizmo *)DStack_11._current.key,DStack_11._current.value,(MethodInfo *)0x0);
    }
    this_00 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
               *)(this->fields)._gizmoToState;
    if (this_00 !=
        (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *)0x0
       ) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
      TypeConverterRegistry+ConverterKey,System::Object]::
      Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object__Clear
                (this_00,
                 MethodInfo__System__Collections__Generic__Dictionary<RTG::Gizmo,_bool>__Clear__);
      return;
    }
  }
  FUN_?();
code_?:
  FUN_?();
  FUN_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Void Snapshot(IEnumerable`1[RTG.Gizmo]) */

void Assembly-CSharp.dll::RTG::GizmoCollectionEnabledStateSnapshot::
     GizmoCollectionEnabledStateSnapshot_Snapshot
               (GizmoCollectionEnabledStateSnapshot *this,IEnumerable_1_RTG_Gizmo_ *gizmos,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<RTG::Gizmo,_bool>__Add_RTG__Gizmo__bool_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__Dictionary<RTG::Gizmo,_bool>__Clear__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__IDisposable);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__IEnumerable<RTG::Gizmo>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__IEnumerator<RTG::Gizmo>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__IEnumerator);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *
            )(this->fields)._gizmoToState;
  if (this_00 !=
      (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *)0x0)
  {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
    TypeConverterRegistry+ConverterKey,System::Object]::
    Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object__Clear
              (this_00,
               MethodInfo__System__Collections__Generic__Dictionary<RTG::Gizmo,_bool>__Clear__);
    if (gizmos != (IEnumerable_1_RTG_Gizmo_ *)0x0) {
      plVar1 = (longlong *)
               FUN_?(0,TypeInfo__System__Collections__Generic__IEnumerable<RTG::Gizmo>,
                             gizmos);
      do {
        if (plVar1 == (longlong *)0x0) {
code_?:
          FUN_?();
          FUN_?();
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        cVar3 = FUN_?(0,TypeInfo__System__Collections__IEnumerator);
        if (cVar3 == '\0') {
          if (plVar1 != (longlong *)0x0) {
            FUN_?(0,TypeInfo__System__IDisposable,plVar1);
          }
          return;
        }
        if (plVar1 == (longlong *)0x0) {
code_?:
          FUN_?();
          goto code_?;
        }
        lVar4 = *plVar1;
        uVar5 = 0;
        pIVar6 = TypeInfo__System__Collections__Generic__IEnumerator<RTG::Gizmo>;
        if (*(ushort *)(lVar4 + 0x12e) != 0) {
          do {
            if (*(IEnumerator_1_RTG_Gizmo___Class **)
                 (*(longlong *)(lVar4 + 0xb0) + (ulonglong)uVar5 * 0x10) ==
                TypeInfo__System__Collections__Generic__IEnumerator<RTG::Gizmo>) {
              puVar7 = (undefined8 *)
                       ((longlong)
                        *(int *)(*(longlong *)(lVar4 + 0xb0) + 8 + (ulonglong)uVar5 * 0x10) * 0x10 +
                        0x138 + lVar4);
              goto code_?;
            }
            uVar5 = uVar5 + 1;
          } while (uVar5 < *(ushort *)(lVar4 + 0x12e));
        }
        puVar7 = (undefined8 *)
                 FUN_?(plVar1,
                               TypeInfo__System__Collections__Generic__IEnumerator<RTG::Gizmo>,0);
code_?:
        key = (Object *)(*(code *)*puVar7)(plVar1,puVar7[1]);
        this_01 = (this->fields)._gizmoToState;
        if (key == (Object *)0x0) {
code_?:
          FUN_?();
          goto code_?;
        }
        if (this_01 == (Dictionary_2_RTG_Gizmo_System_Boolean_ *)0x0) {
          FUN_?();
          goto code_?;
        }
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Boolean]::
        Dictionary_2_System_Object_System_Boolean__TryInsert
                  ((Dictionary_2_System_Object_System_Boolean_ *)this_01,key,
                   *(bool *)&key[10].monitor,
                   (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)pIVar6 >> 8),2),
                   MethodInfo__System__Collections__Generic__Dictionary<RTG::Gizmo,_bool>__Add_RTG__Gizmo__bool_
                   ->klass->rgctx_data[0x22].method);
      } while( true );
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* GizmoCollectionEnabledStateSnapshot() */

void Assembly-CSharp.dll::RTG::GizmoCollectionEnabledStateSnapshot::
     GizmoCollectionEnabledStateSnapshot__ctor
               (GizmoCollectionEnabledStateSnapshot *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<RTG::Gizmo,_bool>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__Dictionary<RTG::Gizmo,_bool>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
             *)FUN_?(TypeInfo__System__Collections__Generic__Dictionary<RTG::Gizmo,_bool>);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements::
  UIR::UIRenderDevice+DisableForceGammaMaterial]::
  Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<RTG::Gizmo,_bool>__Dictionary__);
  bVar1 = iRam_? != 0;
  (this->fields)._gizmoToState = (Dictionary_2_RTG_Gizmo_System_Boolean_ *)this_00;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&this->fields >> 0xc);
    puVar3 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar4 = *puVar3;
      LOCK();
      uVar5 = *puVar3;
      if (uVar4 == uVar5) {
        *puVar3 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (uVar4 != uVar5);
  }
  return;
}

