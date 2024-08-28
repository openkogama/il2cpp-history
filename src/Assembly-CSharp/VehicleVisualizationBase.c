
/* Void ChangeLOD(Single) */

void Assembly-CSharp.dll::VehicleVisualizationBase::VehicleVisualizationBase_ChangeLOD
               (VehicleVisualizationBase *this,float distance,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffb4;
  puVar5 = &stack0xffffffb4;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__get_Current__
                   );
    func_?(&
                    UnityEngine__Renderer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::Renderer>______
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__GetEnumerator__
                   );
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  if ((this->fields).disabledByLod == 0) {
code_?:
    if (distance < (this->fields).cullDistance) goto code_?;
    pLVar6 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
             (this->fields).lodGameObjects;
    (this->fields).disabledByLod = 1;
    if (pLVar6 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
code_?:
      uVar7 = func_?();
      func_?(uVar7);
code_?:
      func_?();
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    pLVar9 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
             RegexCharClass+SingleRange]::
             List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                       (&LStack_10,pLVar6,
                        MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__GetEnumerator__
                       );
    LStack_10._current = (RegexCharClass_SingleRange)&stack0xffffffc0;
    LStack_10._version = 0;
    uStack_1 = 4;
    RVar11 = pLVar9->_current;
    while( true ) {
      RVar12 = RVar11;
      bVar13 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
              List_1_T_Enumerator_System_Object__MoveNext
                        ((List_1_T_Enumerator_System_Object_ *)&stack0xffffffc0,
                         MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__MoveNext__
                        );
      if (bVar13 == 0) break;
      if (RVar12 == (RegexCharClass_SingleRange)0x0) goto code_?;
      RVar11 = RVar12;
      pOStack_14 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                   GameObject_GetComponentsInChildren
                             ((GameObject *)RVar12,
                              UnityEngine__Renderer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::Renderer>______
                             );
      uVar15 = 0;
      while( true ) {
        if (pOStack_14 == (Object__Array *)0x0) goto code_?;
        unaff_EDI = RVar12;
        if ((int)pOStack_14->max_length <= (int)uVar15) break;
        if (pOStack_14->max_length <= uVar15) goto code_?;
        if ((Renderer *)pOStack_14->vector[uVar15] == (Renderer *)0x0) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_enabled
                  ((Renderer *)pOStack_14->vector[uVar15],0,(MethodInfo *)0x0);
        uVar15 = uVar15 + 1;
      }
    }
  }
  else {
    if ((this->fields).cullDistance <= distance) {
      if ((this->fields).disabledByLod != 0) goto code_?;
      goto code_?;
    }
    pLVar6 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
             (this->fields).lodGameObjects;
    (this->fields).disabledByLod = 0;
    if (pLVar6 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
    goto code_?;
    pLVar9 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
             RegexCharClass+SingleRange]::
             List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                       (&LStack_10,pLVar6,
                        MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__GetEnumerator__
                       );
    LStack_10._current = (RegexCharClass_SingleRange)&stack0xffffffc0;
    LStack_10._version = 0;
    uStack_1 = 1;
    RVar11 = pLVar9->_current;
    while( true ) {
      RVar12 = RVar11;
      bVar13 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
              List_1_T_Enumerator_System_Object__MoveNext
                        ((List_1_T_Enumerator_System_Object_ *)&stack0xffffffc0,
                         MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__MoveNext__
                        );
      if (bVar13 == 0) break;
      if (RVar12 == (RegexCharClass_SingleRange)0x0) goto code_?;
      RVar11 = RVar12;
      pOStack_14 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                   GameObject_GetComponentsInChildren
                             ((GameObject *)RVar12,
                              UnityEngine__Renderer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::Renderer>______
                             );
      uVar15 = 0;
      while( true ) {
        if (pOStack_14 == (Object__Array *)0x0) goto code_?;
        unaff_EDI = RVar12;
        if ((int)pOStack_14->max_length <= (int)uVar15) break;
        if (pOStack_14->max_length <= uVar15) {
          func_?();
          goto code_?;
        }
        if ((Renderer *)pOStack_14->vector[uVar15] == (Renderer *)0x0) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_enabled
                  ((Renderer *)pOStack_14->vector[uVar15],1,(MethodInfo *)0x0);
        uVar15 = uVar15 + 1;
      }
    }
  }
  uStack_1 = 0xffffffff;
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)&stack0xffffffc0,
             (ExceptionArgument__Enum)
             MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__Dispose__
             ,(MethodInfo *)unaff_EDI);
  uStack_1 = 0xffffffff;
code_?:
  if ((this->fields).isInSpawner == 0) {
    bVar13 = UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_get_enabled
                      ((Behaviour *)this,(MethodInfo *)0x0);
    if ((bVar13 != 0) &&
       (pfVar16 = &(this->fields).disableVisualizationDistance,
       *pfVar16 <= distance && distance != *pfVar16)) {
      UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                ((Behaviour *)this,0,(MethodInfo *)0x0);
    }
    bVar13 = UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_get_enabled
                      ((Behaviour *)this,(MethodInfo *)0x0);
    if ((bVar13 == 0) && (distance <= (this->fields).disableVisualizationDistance)) {
      UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                ((Behaviour *)this,1,(MethodInfo *)0x0);
    }
  }
  *unaff_FS_OFFSET = uStack_3;
  return;
}


/* Void ParentHullTransformToVisualizationRoot(Transform, Transform) */

void Assembly-CSharp.dll::VehicleVisualizationBase::
     VehicleVisualizationBase_ParentHullTransformToVisualizationRoot
               (Transform *hullTransform,Transform *visualizationRoot,MethodInfo *method)

{
  if (hullTransform != (Transform *)0x0) {
    pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                       ((Vector3 *)&puStack_2,hullTransform,(MethodInfo *)0x0);
    fVar3 = pVVar1->x;
    uVar4 = pVVar1->y;
    fVar5 = pVVar1->z;
    pQVar6 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localRotation
                       ((Quaternion *)&fStack_7,hullTransform,(MethodInfo *)0x0);
    fStack_7 = pQVar6->x;
    puStack_2 = (undefined *)pQVar6->y;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_parent
              (hullTransform,visualizationRoot,(MethodInfo *)0x0);
    value_00.y = (float)uVar4;
    value_00.x = fVar3;
    value_00.z = fVar5;
    pTVar8 = hullTransform;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
              (hullTransform,value_00,(MethodInfo *)0x0);
    value.y = (float)puStack_2;
    value.x = fStack_7;
    value.z = (float)pTVar8;
    value.w = fVar3;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localRotation
              (hullTransform,value,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* VehicleVisualizationBase() */

void Assembly-CSharp.dll::VehicleVisualizationBase::VehicleVisualizationBase__ctor
               (VehicleVisualizationBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__List__
                   );
    func_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::GameObject>);
    cRam_? = '\x01';
  }
  this_00 = (List_1_UnityEngine_GameObject_ *)
            func_?(TypeInfo__System__Collections__Generic__List<UnityEngine::GameObject>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_00,
             MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__List__);
  ppLVar1 = &(this->fields).lodGameObjects;
  *ppLVar1 = this_00;
  func_?(ppLVar1,this_00);
  (this->fields).disableVisualizationDistance = 40.0;
  (this->fields).cullDistance = 145.0;
  UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour__ctor
            ((MonoBehaviour *)this,(MethodInfo *)0x0);
  return;
}

