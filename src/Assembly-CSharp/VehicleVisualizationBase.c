
/* Void ChangeLOD(Single) */

void Assembly-CSharp.dll::VehicleVisualizationBase::VehicleVisualizationBase_ChangeLOD
               (VehicleVisualizationBase *this,float distance,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffa4;
  puVar5 = &stack0xffffffa4;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  CStack_6.klass = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)0x0;
  CStack_6.monitor = (MonitorData *)0x0;
  CStack_6.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)0x0;
  CStack_6.fields.syncRoot = (Object *)0x0;
  CStack_7.klass = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)0x0;
  CStack_7.monitor = (MonitorData *)0x0;
  CStack_7.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)0x0;
  CStack_7.fields.syncRoot = (Object *)0x0;
  func_?();
  if ((this->fields).disabledByLod == 0) {
    puStack_8 = (undefined4 *)&stack0xffffffa4;
    puStack_4 = &stack0xffffffa4;
    if (distance < (this->fields).cullDistance) goto code_?;
    pLVar9 = (List_1_UnityEngine_Color32_ *)(this->fields).lodGameObjects;
    (this->fields).disabledByLod = 1;
    puStack_8 = (undefined4 *)&stack0xffffffa4;
    puStack_4 = &stack0xffffffa4;
    if (pLVar9 == (List_1_UnityEngine_Color32_ *)0x0) goto code_?;
    puStack_8 = (undefined4 *)&stack0xffffffa4;
    puStack_4 = &stack0xffffffa4;
    pLVar10 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Color32]::
             List_1_UnityEngine_Color32__GetEnumerator
                       ((List_1_T_Enumerator_UnityEngine_Color32_ *)&stack0xffffffb0,pLVar9,
                        MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__GetEnumerator__
                       );
    CStack_7.klass = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)pLVar10->l;
    CStack_7.monitor = (MonitorData *)pLVar10->next;
    CStack_7.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar10->ver;
    CStack_7.fields.syncRoot = (Object *)(pLVar10->current).rgba;
    uStack_1 = 2;
    while (cVar11 = func_?(&CStack_7,
                                   MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__MoveNext__
                                  ), cVar11 != '\0') {
      pGVar12 = (GameObject *)
               mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
               Serialization::JsonProperty]::
               Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                         (&CStack_7,
                          MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__get_Current__
                         );
      if (pGVar12 == (GameObject *)0x0) goto code_?;
      unaff_EDI = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                  GameObject_GetComponentsInChildren_29
                            (pGVar12,
                             UnityEngine__Renderer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::Renderer>______
                            );
      iVar13 = 0;
      while( true ) {
        if (unaff_EDI == (UseInteratorVisualization__Array *)0x0) goto code_?;
        if ((int)unaff_EDI->max_length <= iVar13) break;
        pRVar14 = (Renderer *)func_?(iVar13);
        if (pRVar14 == (Renderer *)0x0) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_enabled
                  (pRVar14,0,(MethodInfo *)0x0);
        iVar13 = iVar13 + 1;
      }
    }
    *puStack_8 = 0x118;
    pCVar15 = &CStack_7;
  }
  else {
    puStack_8 = (undefined4 *)&stack0xffffffa4;
    puStack_4 = &stack0xffffffa4;
    if ((this->fields).cullDistance <= distance) goto code_?;
    pLVar9 = (List_1_UnityEngine_Color32_ *)(this->fields).lodGameObjects;
    (this->fields).disabledByLod = 0;
    puStack_8 = (undefined4 *)&stack0xffffffa4;
    puStack_4 = &stack0xffffffa4;
    if (pLVar9 == (List_1_UnityEngine_Color32_ *)0x0) {
code_?:
      func_?(0);
      func_?(unaff_EDI,0,0);
      pcVar16 = (code *)swi(3);
      (*pcVar16)();
      return;
    }
    puStack_8 = (undefined4 *)&stack0xffffffa4;
    puStack_4 = &stack0xffffffa4;
    pLVar10 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Color32]::
             List_1_UnityEngine_Color32__GetEnumerator
                       ((List_1_T_Enumerator_UnityEngine_Color32_ *)&stack0xffffffb0,pLVar9,
                        MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__GetEnumerator__
                       );
    CStack_6.klass = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)pLVar10->l;
    CStack_6.monitor = (MonitorData *)pLVar10->next;
    CStack_6.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar10->ver;
    CStack_6.fields.syncRoot = (Object *)(pLVar10->current).rgba;
    uStack_1 = 0;
    while (cVar11 = func_?(&CStack_6,
                                   MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__MoveNext__
                                  ), cVar11 != '\0') {
      pGVar12 = (GameObject *)
               mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
               Serialization::JsonProperty]::
               Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                         (&CStack_6,
                          MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__get_Current__
                         );
      if (pGVar12 == (GameObject *)0x0) goto code_?;
      unaff_EDI = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                  GameObject_GetComponentsInChildren_29
                            (pGVar12,
                             UnityEngine__Renderer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::Renderer>______
                            );
      iVar13 = 0;
      while( true ) {
        if (unaff_EDI == (UseInteratorVisualization__Array *)0x0) goto code_?;
        if ((int)unaff_EDI->max_length <= iVar13) break;
        pRVar14 = (Renderer *)func_?(iVar13);
        if (pRVar14 == (Renderer *)0x0) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_enabled
                  (pRVar14,1,(MethodInfo *)0x0);
        iVar13 = iVar13 + 1;
      }
    }
    *puStack_8 = 0x86;
    pCVar15 = &CStack_6;
  }
  uStack_1 = 0xffffffff;
  func_?(pCVar15,
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__Dispose__
                 );
code_?:
  if ((this->fields).isInSpawner == 0) {
    bVar17 = UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_get_enabled
                      ((Behaviour *)this,(MethodInfo *)0x0);
    if ((bVar17 != 0) &&
       (pfVar18 = &(this->fields).disableVisualizationDistance,
       *pfVar18 <= distance && distance != *pfVar18)) {
      UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                ((Behaviour *)this,0,(MethodInfo *)0x0);
    }
    bVar17 = UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_get_enabled
                      ((Behaviour *)this,(MethodInfo *)0x0);
    if ((bVar17 == 0) && (distance <= (this->fields).disableVisualizationDistance)) {
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (List_1_UnityEngine_Vector4_ *)
            func_?(TypeInfo__System__Collections__Generic__List<UnityEngine::GameObject>);
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
  List_1_UnityEngine_Vector4___ctor
            (this_00,MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__List__
            );
  (this->fields).lodGameObjects = (List_1_UnityEngine_GameObject_ *)this_00;
  (this->fields).disableVisualizationDistance = 40.0;
  (this->fields).cullDistance = 145.0;
  uStack1 = 0;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?();
  }
  return;
}

