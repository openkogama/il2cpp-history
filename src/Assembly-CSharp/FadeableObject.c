
/* Void OnDestroy() */

void Assembly-CSharp.dll::FadeableObject::FadeableObject_OnDestroy
               (FadeableObject *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IFadeParent>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<IFadeParent>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IFadeParent>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Material>__Clear__);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Material>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__FadeableObject____c__DisplayClass2_0___OnDestroy_b__0_IFadeParent__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__FadeableObject____c__DisplayClass2_0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  object = (Object *)FUN_?(TypeInfo__FadeableObject____c__DisplayClass2_0);
  if (object != (Object *)0x0) {
    bVar1 = iRam_? != 0;
    object[1].klass = (Object__Class *)this;
    if (bVar1) {
      uVar2 = (uint)((ulonglong)(object + 1) >> 0xc);
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
    *(undefined4 *)&object[1].monitor = 0;
    while (pLVar6 = (this->fields).materials, pLVar6 != (List_1_UnityEngine_Material_ *)0x0) {
      if ((pLVar6->fields)._size <= *(int *)&object[1].monitor) {
        pLVar6 = (this->fields).materials;
        if (pLVar6 != (List_1_UnityEngine_Material_ *)0x0) {
          length = (pLVar6->fields)._size;
          piVar7 = &(pLVar6->fields)._version;
          *piVar7 = *piVar7 + 1;
          (pLVar6->fields)._size = 0;
          if (0 < length) {
            mscorlib.dll::System::Array::Array_Clear
                      ((Array *)(pLVar6->fields)._items,0,length,(MethodInfo *)0x0);
          }
          return;
        }
        break;
      }
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Component>_UnityEngine__Component_
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      UnityEngine__GameObject_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::GameObject>_void__
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pvVar8 = (this->fields)._._._._.m_CachedPtr;
      if (pvVar8 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)this,(MethodInfo *)0x0);
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      pcVar9 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar9 = (code *)FUN_?(&UNK_?), pcVar9 == (code *)0x0)) {
        uVar10 = func_?(&UNK_?);
        FUN_?(uVar10,0);
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      pcRam_? = pcVar9;
      pvVar8 = (void *)(*pcRam_?)(pvVar8);
      root = (GameObject *)
             UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::
             Unmarshal_UnmarshalUnityObject
                       (pvVar8,
                        UnityEngine__GameObject_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::GameObject>_void__
                       );
      this_00 = object[2].klass;
      if (this_00 == (Object__Class *)0x0) {
        this_00 = (Object__Class *)
                  FUN_?(
                               TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IFadeParent>
                               );
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]
        ::ExecuteEvents_EventFunction_1_System_Object___ctor
                  ((ExecuteEvents_EventFunction_1_System_Object_ *)this_00,object,
                   MethodInfo__FadeableObject____c__DisplayClass2_0___OnDestroy_b__0_IFadeParent__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        object[2].klass = this_00;
        func_?(object + 2);
      }
      if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                (root,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_System_Object_ *)this_00,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<IFadeParent>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IFadeParent>_
                );
      *(int *)&object[1].monitor = *(int *)&object[1].monitor + 1;
    }
  }
  FUN_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::FadeableObject::FadeableObject_Start
               (FadeableObject *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  UnityEngine__Renderer__MethodInfo__UnityEngine__Component__GetComponentsInChildren<UnityEngine::Renderer>______
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IFadeParent>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<IFadeParent>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IFadeParent>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Material>__Add_UnityEngine__Material_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Material>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__FadeableObject____c__DisplayClass1_0___Start_b__0_IFadeParent__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__FadeableObject____c__DisplayClass1_0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  object = (Object *)FUN_?(TypeInfo__FadeableObject____c__DisplayClass1_0);
  if (object != (Object *)0x0) {
    bVar1 = iRam_? != 0;
    object[1].klass = (Object__Class *)this;
    if (bVar1) {
      uVar2 = (uint)((ulonglong)(object + 1) >> 0xc);
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
    pOVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponentsInChildren
                       ((Component *)this,
                        UnityEngine__Renderer__MethodInfo__UnityEngine__Component__GetComponentsInChildren<UnityEngine::Renderer>______
                       );
    uVar2 = 0;
    if (pOVar6 != (Object__Array *)0x0) {
      ppOVar7 = pOVar6->vector;
      for (; (int)uVar2 < (int)pOVar6->max_length; uVar2 = uVar2 + 1) {
        if ((uint)pOVar6->max_length <= uVar2) {
code_?:
          FUN_?();
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        obj = *ppOVar7;
        if (obj == (Object *)0x0) goto code_?;
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Renderer>_UnityEngine__Renderer_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pOVar9 = obj[1].klass;
        if (pOVar9 == (Object__Class *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException(obj,(MethodInfo *)0x0);
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pcVar8 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
          uVar10 = func_?(&UNK_?);
          FUN_?(uVar10,0);
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pcRam_? = pcVar8;
        lVar11 = (*pcRam_?)(pOVar9);
        uVar12 = 0;
        if (lVar11 == 0) goto code_?;
        for (; (int)uVar12 < (int)*(uint *)(lVar11 + 0x18); uVar12 = uVar12 + 1) {
          if (*(uint *)(lVar11 + 0x18) <= uVar12) goto code_?;
          if ((this->fields).materials == (List_1_UnityEngine_Material_ *)0x0)
          goto code_?;
          FUN_?();
        }
        ppOVar7 = ppOVar7 + 1;
      }
      *(undefined4 *)&object[1].monitor = 0;
      while (pLVar13 = (this->fields).materials, pLVar13 != (List_1_UnityEngine_Material_ *)0x0) {
        if ((pLVar13->fields)._size <= *(int *)&object[1].monitor) {
          return;
        }
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Component>_UnityEngine__Component_
                       );
          LOCK();
          UNLOCK();
          FUN_?(&
                        UnityEngine__GameObject_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::GameObject>_void__
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pvVar14 = (this->fields)._._._._.m_CachedPtr;
        if (pvVar14 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)this,(MethodInfo *)0x0);
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pcVar8 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
          uVar10 = func_?(&UNK_?);
          FUN_?(uVar10,0);
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pcRam_? = pcVar8;
        pvVar14 = (void *)(*pcRam_?)(pvVar14);
        root = (GameObject *)
               UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::
               Unmarshal_UnmarshalUnityObject
                         (pvVar14,
                          UnityEngine__GameObject_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::GameObject>_void__
                         );
        pOVar9 = object[2].klass;
        if (pOVar9 == (Object__Class *)0x0) {
          pOVar9 = (Object__Class *)
                   FUN_?(
                                TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IFadeParent>
                                );
          UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::
          Object]::ExecuteEvents_EventFunction_1_System_Object___ctor
                    ((ExecuteEvents_EventFunction_1_System_Object_ *)pOVar9,object,
                     MethodInfo__FadeableObject____c__DisplayClass1_0___Start_b__0_IFadeParent__UnityEngine__EventSystems__BaseEventData_
                     ,(MethodInfo *)0x0);
          object[2].klass = pOVar9;
          func_?(object + 2);
        }
        if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
          FUN_?();
        }
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                  (root,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_System_Object_ *)pOVar9,
                   UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<IFadeParent>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IFadeParent>_
                  );
        *(int *)&object[1].monitor = *(int *)&object[1].monitor + 1;
      }
    }
  }
code_?:
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* FadeableObject() */

void Assembly-CSharp.dll::FadeableObject::FadeableObject__ctor
               (FadeableObject *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Material>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::Material>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (List_1_UnityEngine_Material_ *)
            FUN_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Material>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_00,
             MethodInfo__System__Collections__Generic__List<UnityEngine::Material>__List__);
  bVar1 = iRam_? != 0;
  (this->fields).materials = this_00;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).materials >> 0xc);
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
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  return;
}

