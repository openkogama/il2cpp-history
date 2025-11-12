
/* Void AddMaterialsToAvatarFader() */

void Assembly-CSharp.dll::FadeableAvatarObject::FadeableAvatarObject_AddMaterialsToAvatarFader
               (FadeableAvatarObject *this,MethodInfo *method)

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
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Material>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__FadeableAvatarObject____c__DisplayClass4_0___AddMaterialsToAvatarFader_b__0_IFadeParent__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__FadeableAvatarObject____c__DisplayClass4_0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  object = (Object *)FUN_?(TypeInfo__FadeableAvatarObject____c__DisplayClass4_0);
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
        return;
      }
      this_00 = object[2].klass;
      root = (this->fields).avatarObject;
      if (this_00 == (Object__Class *)0x0) {
        this_00 = (Object__Class *)
                  FUN_?(
                               TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IFadeParent>
                               );
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]
        ::ExecuteEvents_EventFunction_1_System_Object___ctor
                  ((ExecuteEvents_EventFunction_1_System_Object_ *)this_00,object,
                   MethodInfo__FadeableAvatarObject____c__DisplayClass4_0___AddMaterialsToAvatarFader_b__0_IFadeParent__UnityEngine__EventSystems__BaseEventData_
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
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void Initialize(GameObject) */

void Assembly-CSharp.dll::FadeableAvatarObject::FadeableAvatarObject_Initialize
               (FadeableAvatarObject *this,GameObject *avatarObject,MethodInfo *method)

{
  bVar1 = iRam_? != 0;
  (this->fields).avatarObject = avatarObject;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).avatarObject >> 0xc);
    method = (MethodInfo *)(ulonglong)(uVar2 & 0x3f);
    puVar3 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar4 = *puVar3;
      LOCK();
      uVar5 = *puVar3;
      if (uVar4 == uVar5) {
        *puVar3 = uVar4 | 1L << (longlong)method;
      }
      UNLOCK();
    } while (uVar4 != uVar5);
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IFadeParent>,0,
                  method);
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
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Material>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__FadeableAvatarObject____c__DisplayClass4_0___AddMaterialsToAvatarFader_b__0_IFadeParent__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__FadeableAvatarObject____c__DisplayClass4_0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  object = (Object *)FUN_?(TypeInfo__FadeableAvatarObject____c__DisplayClass4_0);
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
        return;
      }
      this_00 = object[2].klass;
      root = (this->fields).avatarObject;
      if (this_00 == (Object__Class *)0x0) {
        this_00 = (Object__Class *)
                  FUN_?(
                               TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IFadeParent>
                               );
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]
        ::ExecuteEvents_EventFunction_1_System_Object___ctor
                  ((ExecuteEvents_EventFunction_1_System_Object_ *)this_00,object,
                   MethodInfo__FadeableAvatarObject____c__DisplayClass4_0___AddMaterialsToAvatarFader_b__0_IFadeParent__UnityEngine__EventSystems__BaseEventData_
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
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::FadeableAvatarObject::FadeableAvatarObject_OnDestroy
               (FadeableAvatarObject *this,MethodInfo *method)

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
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__FadeableAvatarObject____c__DisplayClass5_0___OnDestroy_b__0_IFadeParent__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__FadeableAvatarObject____c__DisplayClass5_0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  object = (Object *)FUN_?(TypeInfo__FadeableAvatarObject____c__DisplayClass5_0);
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
    pGVar6 = (this->fields).avatarObject;
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
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
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Object);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (pGVar6 != (GameObject *)0x0) {
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if ((pGVar6->fields)._.m_CachedPtr != (void *)0x0) {
        *(undefined4 *)&object[1].monitor = 0;
        while (pLVar7 = (this->fields).materials, pLVar7 != (List_1_UnityEngine_Material_ *)0x0) {
          if ((pLVar7->fields)._size <= *(int *)&object[1].monitor) goto code_?;
          this_00 = object[2].klass;
          pGVar6 = (this->fields).avatarObject;
          if (this_00 == (Object__Class *)0x0) {
            this_00 = (Object__Class *)
                      FUN_?(
                                   TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IFadeParent>
                                   );
            UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::
            Object]::ExecuteEvents_EventFunction_1_System_Object___ctor
                      ((ExecuteEvents_EventFunction_1_System_Object_ *)this_00,object,
                       MethodInfo__FadeableAvatarObject____c__DisplayClass5_0___OnDestroy_b__0_IFadeParent__UnityEngine__EventSystems__BaseEventData_
                       ,(MethodInfo *)0x0);
            object[2].klass = this_00;
            func_?(object + 2);
          }
          if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
            FUN_?();
          }
          UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
          ExecuteEvents_ExecuteHierarchy
                    (pGVar6,(BaseEventData *)0x0,
                     (ExecuteEvents_EventFunction_1_System_Object_ *)this_00,
                     UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<IFadeParent>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IFadeParent>_
                    );
          *(int *)&object[1].monitor = *(int *)&object[1].monitor + 1;
        }
        goto code_?;
      }
    }
code_?:
    pLVar7 = (this->fields).materials;
    if (pLVar7 != (List_1_UnityEngine_Material_ *)0x0) {
      length = (pLVar7->fields)._size;
      piVar8 = &(pLVar7->fields)._version;
      *piVar8 = *piVar8 + 1;
      (pLVar7->fields)._size = 0;
      if (0 < length) {
        mscorlib.dll::System::Array::Array_Clear
                  ((Array *)(pLVar7->fields)._items,0,length,(MethodInfo *)0x0);
      }
      return;
    }
  }
code_?:
  FUN_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::FadeableAvatarObject::FadeableAvatarObject_Start
               (FadeableAvatarObject *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  UnityEngine__Renderer__MethodInfo__UnityEngine__Component__GetComponentsInChildren<UnityEngine::Renderer>______
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Material>__Add_UnityEngine__Material_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pOVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponentsInChildren
                     ((Component *)this,
                      UnityEngine__Renderer__MethodInfo__UnityEngine__Component__GetComponentsInChildren<UnityEngine::Renderer>______
                     );
  uVar2 = 0;
  if (pOVar1 == (Object__Array *)0x0) {
code_?:
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  ppOVar4 = pOVar1->vector;
  do {
    if ((int)pOVar1->max_length <= (int)uVar2) {
      pGVar5 = (this->fields).avatarObject;
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
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
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Object);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (pGVar5 != (GameObject *)0x0) {
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        if ((pGVar5->fields)._.m_CachedPtr != (void *)0x0) {
          FadeableAvatarObject_AddMaterialsToAvatarFader(this,(MethodInfo *)0x0);
        }
      }
      return;
    }
    if ((uint)pOVar1->max_length <= uVar2) {
code_?:
      FUN_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    obj = *ppOVar4;
    if (obj == (Object *)0x0) goto code_?;
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Renderer>_UnityEngine__Renderer_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pOVar6 = obj[1].klass;
    if (pOVar6 == (Object__Class *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException(obj,(MethodInfo *)0x0);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pcVar3 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
      uVar7 = func_?(&UNK_?);
      FUN_?(uVar7,0);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pcRam_? = pcVar3;
    lVar8 = (*pcRam_?)(pOVar6);
    uVar9 = 0;
    if (lVar8 == 0) goto code_?;
    for (; (int)uVar9 < (int)*(uint *)(lVar8 + 0x18); uVar9 = uVar9 + 1) {
      if (*(uint *)(lVar8 + 0x18) <= uVar9) goto code_?;
      if ((this->fields).materials == (List_1_UnityEngine_Material_ *)0x0)
      goto code_?;
      FUN_?();
    }
    uVar2 = uVar2 + 1;
    ppOVar4 = ppOVar4 + 1;
  } while( true );
}


/* FadeableAvatarObject() */

void Assembly-CSharp.dll::FadeableAvatarObject::FadeableAvatarObject__ctor
               (FadeableAvatarObject *this,MethodInfo *method)

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

