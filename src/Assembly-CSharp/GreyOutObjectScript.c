
/* Void Awake() */

void Assembly-CSharp.dll::GreyOutObjectScript::GreyOutObjectScript_Awake
               (GreyOutObjectScript *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Cubemodel_hiddenShader_not_found);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Standard_hiddenShader_not_found);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
            ((Behaviour *)this,0,(MethodInfo *)0x0);
  pGVar1 = (this->fields).pickupObject;
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
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (pGVar1 != (GameObject *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pGVar1->fields)._.m_CachedPtr != (void *)0x0) {
      GreyOutObjectScript_InitializeOriginalMaterials(this,(MethodInfo *)0x0);
    }
  }
  pMVar2 = MVGameControllerBase::MVGameControllerBase_get_MaterialLoader((MethodInfo *)0x0);
  if (pMVar2 == (MaterialLoader *)0x0) {
code_?:
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  lVar4 = 0x50;
  if ((pMVar2->fields).isUsingSM3Shader == 0) {
    lVar4 = 0x58;
  }
  bVar5 = iRam_? != 0;
  (this->fields).cubeModelHiddenShader = *(Shader **)((longlong)&pMVar2->klass + lVar4);
  if (bVar5) {
    uVar6 = (uint)((ulonglong)&(this->fields).cubeModelHiddenShader >> 0xc);
    lVar4 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
    do {
      uVar7 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar8 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar5 = uVar7 == *puVar8;
      if (bVar5) {
        *puVar8 = uVar7 | 1L << (uVar6 & 0x3f);
      }
      UNLOCK();
    } while (!bVar5);
  }
  pMVar2 = MVGameControllerBase::MVGameControllerBase_get_MaterialLoader((MethodInfo *)0x0);
  if (pMVar2 == (MaterialLoader *)0x0) goto code_?;
  bVar5 = iRam_? != 0;
  (this->fields).standardHiddenShader = (pMVar2->fields).pickupUnavailableShader;
  if (bVar5) {
    uVar6 = (uint)((ulonglong)&(this->fields).standardHiddenShader >> 0xc);
    lVar4 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
    do {
      uVar7 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar8 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar5 = uVar7 == *puVar8;
      if (bVar5) {
        *puVar8 = uVar7 | 1L << (uVar6 & 0x3f);
      }
      UNLOCK();
    } while (!bVar5);
  }
  pSVar9 = (this->fields).cubeModelHiddenShader;
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
  if (pSVar9 != (Shader *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pSVar9->fields)._.m_CachedPtr != (void *)0x0) goto code_?;
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
            ((Object *)StringLiteral_Cubemodel_hiddenShader_not_found,(MethodInfo *)0x0);
code_?:
  pSVar9 = (this->fields).standardHiddenShader;
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
  if (pSVar9 != (Shader *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pSVar9->fields)._.m_CachedPtr != (void *)0x0) {
      return;
    }
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
            ((Object *)StringLiteral_Standard_hiddenShader_not_found,(MethodInfo *)0x0);
  return;
}


/* Void ExecuteOnMaterials(Action`1[GreyOutObjectScript+PickupOriginalMaterials]) */

void Assembly-CSharp.dll::GreyOutObjectScript::GreyOutObjectScript_ExecuteOnMaterials
               (GreyOutObjectScript *this,
               Action_1_GreyOutObjectScript_PickupOriginalMaterials_ *action,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<GreyOutObjectScript::PickupOriginalMaterials>__RemoveAt_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<GreyOutObjectScript::PickupOriginalMaterials>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<GreyOutObjectScript::PickupOriginalMaterials>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).pickupOriginalMaterials;
  if (pLVar1 != (List_1_GreyOutObjectScript_PickupOriginalMaterials_ *)0x0) {
    index = (pLVar1->fields)._size - 1;
    if (-1 < (int)index) {
      lVar2 = (longlong)(int)index * 8 + 0x20;
      do {
        pLVar1 = (this->fields).pickupOriginalMaterials;
        if (pLVar1 == (List_1_GreyOutObjectScript_PickupOriginalMaterials_ *)0x0)
        goto code_?;
        if ((uint)(pLVar1->fields)._size <= index) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                    ((MethodInfo *)0x0);
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pGVar4 = (pLVar1->fields)._items;
        if (pGVar4 == (GreyOutObjectScript_PickupOriginalMaterials__Array *)0x0)
        goto code_?;
        if ((uint)pGVar4->max_length <= index) {
          FUN_?();
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        lVar5 = *(longlong *)((longlong)pGVar4->vector + lVar2 + -0x20);
        if (lVar5 == 0) goto code_?;
        lVar5 = *(longlong *)(lVar5 + 0x10);
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
        if (lVar5 == 0) {
code_?:
          pLVar1 = (this->fields).pickupOriginalMaterials;
          if (pLVar1 == (List_1_GreyOutObjectScript_PickupOriginalMaterials_ *)0x0)
          goto code_?;
          mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
          List_1_System_Object__RemoveAt
                    ((List_1_System_Object_ *)pLVar1,index,
                     MethodInfo__System__Collections__Generic__List<GreyOutObjectScript::PickupOriginalMaterials>__RemoveAt_int_
                    );
        }
        else {
          if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
            FUN_?();
          }
          if (*(longlong *)(lVar5 + 0x10) == 0) goto code_?;
          if ((this->fields).pickupOriginalMaterials ==
              (List_1_GreyOutObjectScript_PickupOriginalMaterials_ *)0x0) goto code_?;
          lVar5 = FUN_?();
          if ((lVar5 == 0) || (*(Component **)(lVar5 + 0x10) == (Component *)0x0))
          goto code_?;
          pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                             (*(Component **)(lVar5 + 0x10),(MethodInfo *)0x0);
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
          if (pGVar6 == (GameObject *)0x0) goto code_?;
          if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
            FUN_?();
          }
          if ((pGVar6->fields)._.m_CachedPtr == (void *)0x0) goto code_?;
          pLVar1 = (this->fields).pickupOriginalMaterials;
          if (pLVar1 == (List_1_GreyOutObjectScript_PickupOriginalMaterials_ *)0x0)
          goto code_?;
          uVar7 = FUN_?(pLVar1,index);
          if (action == (Action_1_GreyOutObjectScript_PickupOriginalMaterials_ *)0x0)
          goto code_?;
          (*(action->fields)._._.invoke_impl)
                    ((action->fields)._._.method_code,uVar7,(action->fields)._._.method);
        }
        lVar2 = lVar2 + -8;
        index = index - 1;
      } while (-1 < (int)index);
    }
    return;
  }
code_?:
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void GreyIn() */

void Assembly-CSharp.dll::GreyOutObjectScript::GreyOutObjectScript_GreyIn
               (GreyOutObjectScript *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<GreyOutObjectScript::PickupOriginalMaterials>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__GreyOutObjectScript__GreyInExec_GreyOutObjectScript__PickupOriginalMaterials_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (UnityAction_1_System_Object_ *)
            FUN_?(TypeInfo__System__Action<GreyOutObjectScript::PickupOriginalMaterials>);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
  UnityAction_1_System_Object___ctor
            (this_00,(Object *)0x0,
             MethodInfo__GreyOutObjectScript__GreyInExec_GreyOutObjectScript__PickupOriginalMaterials_
             ,(MethodInfo *)0x0);
  GreyOutObjectScript_ExecuteOnMaterials
            (this,(Action_1_GreyOutObjectScript_PickupOriginalMaterials_ *)this_00,(MethodInfo *)0x0
            );
  (this->fields).isGreyedIn = 1;
  return;
}


/* Void GreyInExec(GreyOutObjectScript+PickupOriginalMaterials) */

void Assembly-CSharp.dll::GreyOutObjectScript::GreyOutObjectScript_GreyInExec
               (GreyOutObjectScript_PickupOriginalMaterials *pickupOriginalMaterial,
               MethodInfo *method)

{
  if ((pickupOriginalMaterial != (GreyOutObjectScript_PickupOriginalMaterials *)0x0) &&
     (pMVar1 = (pickupOriginalMaterial->fields).meshRenderer, pMVar1 != (MeshRenderer *)0x0)) {
    UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_SetMaterialArray_1
              ((Renderer *)pMVar1,(pickupOriginalMaterial->fields).originalMaterials,
               (MethodInfo *)0x0);
    pMVar1 = (pickupOriginalMaterial->fields).meshRenderer;
    if (pMVar1 != (MeshRenderer *)0x0) {
      bVar2 = (pickupOriginalMaterial->fields).meshRendererEnabled;
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Renderer>_UnityEngine__Renderer_
                      ,bVar2,0);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (pMVar1 == (MeshRenderer *)0x0) {
        FUN_?();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pvVar4 = (pMVar1->fields)._._._.m_CachedPtr;
      if (pvVar4 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pMVar1,(MethodInfo *)0x0);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pcVar3 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
        uVar5 = func_?(&UNK_?);
        FUN_?(uVar5,0);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pcRam_? = pcVar3;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam_?)(pvVar4,bVar2);
      return;
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void GreyOut() */

void Assembly-CSharp.dll::GreyOutObjectScript::GreyOutObjectScript_GreyOut
               (GreyOutObjectScript *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<GreyOutObjectScript::PickupOriginalMaterials>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__GreyOutObjectScript__GreyOutExec_GreyOutObjectScript__PickupOriginalMaterials_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (UnityAction_1_System_Object_ *)
            FUN_?(TypeInfo__System__Action<GreyOutObjectScript::PickupOriginalMaterials>);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
  UnityAction_1_System_Object___ctor
            (this_00,(Object *)this,
             MethodInfo__GreyOutObjectScript__GreyOutExec_GreyOutObjectScript__PickupOriginalMaterials_
             ,(MethodInfo *)0x0);
  GreyOutObjectScript_ExecuteOnMaterials
            (this,(Action_1_GreyOutObjectScript_PickupOriginalMaterials_ *)this_00,(MethodInfo *)0x0
            );
  (this->fields).isGreyedIn = 0;
  return;
}


/* Void GreyOutExec(GreyOutObjectScript+PickupOriginalMaterials) */

void Assembly-CSharp.dll::GreyOutObjectScript::GreyOutObjectScript_GreyOutExec
               (GreyOutObjectScript *this,
               GreyOutObjectScript_PickupOriginalMaterials *pickupOriginalMaterial,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_CubeModel);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((pickupOriginalMaterial != (GreyOutObjectScript_PickupOriginalMaterials *)0x0) &&
     (obj = (pickupOriginalMaterial->fields).meshRenderer, obj != (MeshRenderer *)0x0)) {
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Renderer>_UnityEngine__Renderer_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar1 = (obj->fields)._._._.m_CachedPtr;
    if (pvVar1 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pcVar2 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
      uVar3 = func_?(&UNK_?);
      FUN_?(uVar3,0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pcRam_? = pcVar2;
    lVar4 = (*pcRam_?)(pvVar1);
    uVar5 = 0;
    if (lVar4 != 0) {
      puVar6 = (undefined8 *)(lVar4 + 0x20);
      while( true ) {
        if (*(int *)(lVar4 + 0x18) <= (int)uVar5) {
          return;
        }
        if (*(uint *)(lVar4 + 0x18) <= uVar5) {
          FUN_?();
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        this_00 = (Material *)*puVar6;
        if (((this_00 == (Material *)0x0) ||
            (this_01 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_get_shader
                                 (this_00,(MethodInfo *)0x0), this_01 == (Shader *)0x0)) ||
           (this_02 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_GetName
                                ((Object_1 *)this_01,(MethodInfo *)0x0), this_02 == (String *)0x0))
        break;
        bVar7 = mscorlib.dll::System::String::String_Contains
                          (this_02,StringLiteral_CubeModel,(MethodInfo *)0x0);
        UnityEngine.CoreModule.dll::UnityEngine::Material::Material_set_shader
                  (this_00,(&(this->fields).cubeModelHiddenShader)[(ulonglong)bVar7 ^ 1],
                   (MethodInfo *)0x0);
        uVar5 = uVar5 + 1;
        puVar6 = puVar6 + 1;
      }
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void Hide() */

void Assembly-CSharp.dll::GreyOutObjectScript::GreyOutObjectScript_Hide
               (GreyOutObjectScript *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<GreyOutObjectScript::PickupOriginalMaterials>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__GreyOutObjectScript__HideExec_GreyOutObjectScript__PickupOriginalMaterials_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (UnityAction_1_System_Object_ *)
            FUN_?(TypeInfo__System__Action<GreyOutObjectScript::PickupOriginalMaterials>);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
  UnityAction_1_System_Object___ctor
            (this_00,(Object *)this,
             MethodInfo__GreyOutObjectScript__HideExec_GreyOutObjectScript__PickupOriginalMaterials_
             ,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<GreyOutObjectScript::PickupOriginalMaterials>__RemoveAt_int_
                  ,this_00,0);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<GreyOutObjectScript::PickupOriginalMaterials>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<GreyOutObjectScript::PickupOriginalMaterials>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).pickupOriginalMaterials;
  if (pLVar1 != (List_1_GreyOutObjectScript_PickupOriginalMaterials_ *)0x0) {
    index = (pLVar1->fields)._size - 1;
    if (-1 < (int)index) {
      lVar2 = (longlong)(int)index * 8 + 0x20;
      do {
        pLVar1 = (this->fields).pickupOriginalMaterials;
        if (pLVar1 == (List_1_GreyOutObjectScript_PickupOriginalMaterials_ *)0x0)
        goto code_?;
        if ((uint)(pLVar1->fields)._size <= index) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                    ((MethodInfo *)0x0);
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pGVar4 = (pLVar1->fields)._items;
        if (pGVar4 == (GreyOutObjectScript_PickupOriginalMaterials__Array *)0x0)
        goto code_?;
        if ((uint)pGVar4->max_length <= index) {
          FUN_?();
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        lVar5 = *(longlong *)((longlong)pGVar4->vector + lVar2 + -0x20);
        if (lVar5 == 0) goto code_?;
        lVar5 = *(longlong *)(lVar5 + 0x10);
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
        if (lVar5 == 0) {
code_?:
          pLVar1 = (this->fields).pickupOriginalMaterials;
          if (pLVar1 == (List_1_GreyOutObjectScript_PickupOriginalMaterials_ *)0x0)
          goto code_?;
          mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
          List_1_System_Object__RemoveAt
                    ((List_1_System_Object_ *)pLVar1,index,
                     MethodInfo__System__Collections__Generic__List<GreyOutObjectScript::PickupOriginalMaterials>__RemoveAt_int_
                    );
        }
        else {
          if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
            FUN_?();
          }
          if (*(longlong *)(lVar5 + 0x10) == 0) goto code_?;
          if ((this->fields).pickupOriginalMaterials ==
              (List_1_GreyOutObjectScript_PickupOriginalMaterials_ *)0x0) goto code_?;
          lVar5 = FUN_?();
          if ((lVar5 == 0) || (*(Component **)(lVar5 + 0x10) == (Component *)0x0))
          goto code_?;
          pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                             (*(Component **)(lVar5 + 0x10),(MethodInfo *)0x0);
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
          if (pGVar6 == (GameObject *)0x0) goto code_?;
          if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
            FUN_?();
          }
          if ((pGVar6->fields)._.m_CachedPtr == (void *)0x0) goto code_?;
          pLVar1 = (this->fields).pickupOriginalMaterials;
          if (pLVar1 == (List_1_GreyOutObjectScript_PickupOriginalMaterials_ *)0x0)
          goto code_?;
          uVar7 = FUN_?(pLVar1,index);
          if (this_00 == (UnityAction_1_System_Object_ *)0x0) goto code_?;
          (*(this_00->fields)._._.invoke_impl)
                    ((this_00->fields)._._.method_code,uVar7,(this_00->fields)._._.method);
        }
        lVar2 = lVar2 + -8;
        index = index - 1;
      } while (-1 < (int)index);
    }
    return;
  }
code_?:
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void HideExec(GreyOutObjectScript+PickupOriginalMaterials) */

void Assembly-CSharp.dll::GreyOutObjectScript::GreyOutObjectScript_HideExec
               (GreyOutObjectScript *this,
               GreyOutObjectScript_PickupOriginalMaterials *pickupOriginalMaterial,
               MethodInfo *method)

{
  if ((pickupOriginalMaterial != (GreyOutObjectScript_PickupOriginalMaterials *)0x0) &&
     (pMVar1 = (pickupOriginalMaterial->fields).meshRenderer, pMVar1 != (MeshRenderer *)0x0)) {
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Renderer>_UnityEngine__Renderer_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar2 = (pMVar1->fields)._._._.m_CachedPtr;
    if (pvVar2 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pMVar1,(MethodInfo *)0x0);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pcVar3 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
      uVar4 = func_?(&UNK_?);
      FUN_?(uVar4,0);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pcRam_? = pcVar3;
    bVar5 = (*pcRam_?)(pvVar2);
    pMVar1 = (pickupOriginalMaterial->fields).meshRenderer;
    (pickupOriginalMaterial->fields).meshRendererEnabled = bVar5;
    this = (GreyOutObjectScript *)0x0;
    if (pMVar1 != (MeshRenderer *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Renderer>_UnityEngine__Renderer_
                      ,0,0,in_R9,unaff_RSI);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (pMVar1 == (MeshRenderer *)0x0) {
        FUN_?();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pvVar2 = (pMVar1->fields)._._._.m_CachedPtr;
      if (pvVar2 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pMVar1,(MethodInfo *)0x0);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pcVar3 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
        uVar4 = func_?(&UNK_?);
        FUN_?(uVar4,0);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pcRam_? = pcVar3;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam_?)(pvVar2,0);
      return;
    }
  }
  FUN_?(this);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void InitializeOriginalMaterials() */

void Assembly-CSharp.dll::GreyOutObjectScript::GreyOutObjectScript_InitializeOriginalMaterials
               (GreyOutObjectScript *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  UnityEngine__MeshRenderer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshRenderer>______
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<GreyOutObjectScript::PickupOriginalMaterials>__Add_GreyOutObjectScript__PickupOriginalMaterials_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<GreyOutObjectScript::PickupOriginalMaterials>__Clear__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__GreyOutObjectScript__PickupOriginalMaterials);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).pickupOriginalMaterials;
  if (pLVar1 != (List_1_GreyOutObjectScript_PickupOriginalMaterials_ *)0x0) {
    length = (pLVar1->fields)._size;
    uVar2 = 0;
    piVar3 = &(pLVar1->fields)._version;
    *piVar3 = *piVar3 + 1;
    (pLVar1->fields)._size = 0;
    if (0 < length) {
      mscorlib.dll::System::Array::Array_Clear
                ((Array *)(pLVar1->fields)._items,0,length,(MethodInfo *)0x0);
    }
    pMVar4 = 
    UnityEngine__MeshRenderer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshRenderer>______
    ;
    this_00 = (this->fields).pickupObject;
    if (this_00 != (GameObject *)0x0) {
      if ((
          UnityEngine__MeshRenderer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshRenderer>______
          ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
        FUN_?(
                     UnityEngine__MeshRenderer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshRenderer>______
                     );
      }
      p_Var9 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
               GameObject_GetComponentsInChildren_4
                         (this_00,0,((pMVar4->field7_0x38).rgctx_data)->method);
      if (p_Var9 != (_Il2CppFullySharedGenericType__Array *)0x0) {
        pp_Var15 = p_Var9->vector;
        while( true ) {
          if ((int)p_Var9->max_length <= (int)uVar2) {
            return;
          }
          if ((uint)p_Var9->max_length <= uVar2) {
            FUN_?();
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          obj = (Object__Class *)*pp_Var15;
          item = (Object *)FUN_?(TypeInfo__GreyOutObjectScript__PickupOriginalMaterials);
          bVar6 = iRam_? != 0;
          *(undefined1 *)&item[2].klass = 1;
          item[1].klass = obj;
          if (bVar6) {
            uVar7 = (uint)((ulonglong)(item + 1) >> 0xc);
            lVar8 = (ulonglong)((uVar7 & 0x1fffff) >> 6) * 8;
            do {
              uVar9 = *(ulonglong *)(lVar8 + 0xADDR);
              puVar10 = (ulonglong *)(lVar8 + 0xADDR);
              LOCK();
              bVar6 = uVar9 == *puVar10;
              if (bVar6) {
                *puVar10 = uVar9 | 1L << (uVar7 & 0x3f);
              }
              UNLOCK();
            } while (!bVar6);
          }
          if (obj == (Object__Class *)0x0) break;
          if (cRam_? == '\0') {
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Renderer>_UnityEngine__Renderer_
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pcVar11 = (obj->_0).name;
          if (pcVar11 == (char *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
            ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pcVar5 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
            uVar12 = func_?(&UNK_?);
            FUN_?(uVar12,0);
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pcRam_? = pcVar5;
          pMVar13 = (MonitorData *)(*pcRam_?)(pcVar11);
          bVar6 = iRam_? != 0;
          item[1].monitor = pMVar13;
          if (bVar6) {
            uVar7 = (uint)((ulonglong)&item[1].monitor >> 0xc);
            lVar8 = (ulonglong)((uVar7 & 0x1fffff) >> 6) * 8;
            do {
              uVar9 = *(ulonglong *)(lVar8 + 0xADDR);
              puVar10 = (ulonglong *)(lVar8 + 0xADDR);
              LOCK();
              bVar6 = uVar9 == *puVar10;
              if (bVar6) {
                *puVar10 = uVar9 | 1L << (uVar7 & 0x3f);
              }
              UNLOCK();
            } while (!bVar6);
          }
          pMVar4 = 
          MethodInfo__System__Collections__Generic__List<GreyOutObjectScript::PickupOriginalMaterials>__Add_GreyOutObjectScript__PickupOriginalMaterials_
          ;
          pLVar1 = (this->fields).pickupOriginalMaterials;
          if (pLVar1 == (List_1_GreyOutObjectScript_PickupOriginalMaterials_ *)0x0) break;
          piVar3 = &(pLVar1->fields)._version;
          *piVar3 = *piVar3 + 1;
          pGVar14 = (pLVar1->fields)._items;
          if (pGVar14 == (GreyOutObjectScript_PickupOriginalMaterials__Array *)0x0) break;
          uVar7 = (pLVar1->fields)._size;
          if (uVar7 < (uint)pGVar14->max_length) {
            (pLVar1->fields)._size = uVar7 + 1;
            FUN_?(pGVar14,(longlong)(int)uVar7,item);
            uVar2 = uVar2 + 1;
            pp_Var15 = pp_Var15 + 1;
          }
          else {
            mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
            List_1_System_Object__AddWithResize
                      ((List_1_System_Object_ *)pLVar1,item,pMVar4->klass->rgctx_data[0xe].method);
            uVar2 = uVar2 + 1;
            pp_Var15 = pp_Var15 + 1;
          }
        }
      }
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void SetPickupObject(GameObject) */

void Assembly-CSharp.dll::GreyOutObjectScript::GreyOutObjectScript_SetPickupObject
               (GreyOutObjectScript *this,GameObject *pickupObject,MethodInfo *method)

{
  bVar1 = iRam_? != 0;
  (this->fields).pickupObject = pickupObject;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).pickupObject >> 0xc);
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
    FUN_?(&
                  UnityEngine__MeshRenderer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshRenderer>______
                  ,0,method);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<GreyOutObjectScript::PickupOriginalMaterials>__Add_GreyOutObjectScript__PickupOriginalMaterials_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<GreyOutObjectScript::PickupOriginalMaterials>__Clear__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__GreyOutObjectScript__PickupOriginalMaterials);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar6 = (this->fields).pickupOriginalMaterials;
  if (pLVar6 != (List_1_GreyOutObjectScript_PickupOriginalMaterials_ *)0x0) {
    length = (pLVar6->fields)._size;
    uVar2 = 0;
    piVar7 = &(pLVar6->fields)._version;
    *piVar7 = *piVar7 + 1;
    (pLVar6->fields)._size = 0;
    if (0 < length) {
      mscorlib.dll::System::Array::Array_Clear
                ((Array *)(pLVar6->fields)._items,0,length,(MethodInfo *)0x0);
    }
    pMVar8 = 
    UnityEngine__MeshRenderer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshRenderer>______
    ;
    this_00 = (this->fields).pickupObject;
    if (this_00 != (GameObject *)0x0) {
      if ((
          UnityEngine__MeshRenderer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshRenderer>______
          ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
        FUN_?(
                     UnityEngine__MeshRenderer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshRenderer>______
                     );
      }
      p_Var10 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                GameObject_GetComponentsInChildren_4
                          (this_00,0,((pMVar8->field7_0x38).rgctx_data)->method);
      if (p_Var10 != (_Il2CppFullySharedGenericType__Array *)0x0) {
        pp_Var16 = p_Var10->vector;
        while( true ) {
          if ((int)p_Var10->max_length <= (int)uVar2) {
            return;
          }
          if ((uint)p_Var10->max_length <= uVar2) {
            FUN_?();
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          obj = (Object__Class *)*pp_Var16;
          item = (Object *)FUN_?(TypeInfo__GreyOutObjectScript__PickupOriginalMaterials);
          bVar1 = iRam_? != 0;
          *(undefined1 *)&item[2].klass = 1;
          item[1].klass = obj;
          if (bVar1) {
            uVar10 = (uint)((ulonglong)(item + 1) >> 0xc);
            lVar11 = (ulonglong)((uVar10 & 0x1fffff) >> 6) * 8;
            do {
              uVar5 = *(ulonglong *)(lVar11 + 0xADDR);
              puVar3 = (ulonglong *)(lVar11 + 0xADDR);
              LOCK();
              bVar1 = uVar5 == *puVar3;
              if (bVar1) {
                *puVar3 = uVar5 | 1L << (uVar10 & 0x3f);
              }
              UNLOCK();
            } while (!bVar1);
          }
          if (obj == (Object__Class *)0x0) break;
          if (cRam_? == '\0') {
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Renderer>_UnityEngine__Renderer_
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pcVar12 = (obj->_0).name;
          if (pcVar12 == (char *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
            ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          pcVar9 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar9 = (code *)FUN_?(&UNK_?), pcVar9 == (code *)0x0)) {
            uVar13 = func_?(&UNK_?);
            FUN_?(uVar13,0);
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          pcRam_? = pcVar9;
          pMVar14 = (MonitorData *)(*pcRam_?)(pcVar12);
          bVar1 = iRam_? != 0;
          item[1].monitor = pMVar14;
          if (bVar1) {
            uVar10 = (uint)((ulonglong)&item[1].monitor >> 0xc);
            lVar11 = (ulonglong)((uVar10 & 0x1fffff) >> 6) * 8;
            do {
              uVar5 = *(ulonglong *)(lVar11 + 0xADDR);
              puVar3 = (ulonglong *)(lVar11 + 0xADDR);
              LOCK();
              bVar1 = uVar5 == *puVar3;
              if (bVar1) {
                *puVar3 = uVar5 | 1L << (uVar10 & 0x3f);
              }
              UNLOCK();
            } while (!bVar1);
          }
          pMVar8 = 
          MethodInfo__System__Collections__Generic__List<GreyOutObjectScript::PickupOriginalMaterials>__Add_GreyOutObjectScript__PickupOriginalMaterials_
          ;
          pLVar6 = (this->fields).pickupOriginalMaterials;
          if (pLVar6 == (List_1_GreyOutObjectScript_PickupOriginalMaterials_ *)0x0) break;
          piVar7 = &(pLVar6->fields)._version;
          *piVar7 = *piVar7 + 1;
          pGVar15 = (pLVar6->fields)._items;
          if (pGVar15 == (GreyOutObjectScript_PickupOriginalMaterials__Array *)0x0) break;
          uVar10 = (pLVar6->fields)._size;
          if (uVar10 < (uint)pGVar15->max_length) {
            (pLVar6->fields)._size = uVar10 + 1;
            FUN_?(pGVar15,(longlong)(int)uVar10,item);
            uVar2 = uVar2 + 1;
            pp_Var16 = pp_Var16 + 1;
          }
          else {
            mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
            List_1_System_Object__AddWithResize
                      ((List_1_System_Object_ *)pLVar6,item,pMVar8->klass->rgctx_data[0xe].method);
            uVar2 = uVar2 + 1;
            pp_Var16 = pp_Var16 + 1;
          }
        }
      }
    }
  }
  FUN_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* GreyOutObjectScript() */

void Assembly-CSharp.dll::GreyOutObjectScript::GreyOutObjectScript__ctor
               (GreyOutObjectScript *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<GreyOutObjectScript::PickupOriginalMaterials>__List__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__List<GreyOutObjectScript::PickupOriginalMaterials>
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (List_1_GreyOutObjectScript_PickupOriginalMaterials_ *)
            FUN_?(
                         TypeInfo__System__Collections__Generic__List<GreyOutObjectScript::PickupOriginalMaterials>
                         );
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_00,
             MethodInfo__System__Collections__Generic__List<GreyOutObjectScript::PickupOriginalMaterials>__List__
            );
  bVar1 = iRam_? != 0;
  (this->fields).pickupOriginalMaterials = this_00;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).pickupOriginalMaterials >> 0xc);
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
  bVar1 = cRam_? == '\0';
  (this->fields).isGreyedIn = 1;
  if (bVar1) {
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

