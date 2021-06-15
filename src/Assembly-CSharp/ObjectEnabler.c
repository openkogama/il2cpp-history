
/* Void Awake() */

void Assembly-CSharp.dll::ObjectEnabler::ObjectEnabler_Awake(ObjectEnabler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__PrefabPool->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__PrefabPool->_1).cctor_started == 0)) {
    func_?(TypeInfo__PrefabPool);
  }
  this_00 = PrefabPool::PrefabPool_get_Instance((MethodInfo *)0x0);
  if (this_00 != (PrefabPool *)0x0) {
    pXVar1 = (XpBoostParticlePreviewer *)
             PrefabPool::PrefabPool_get_ObjectHiddenMaterial(this_00,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?();
    }
    pXVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                       (pXVar1,
                        UnityEngine__Material_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::Material>_UnityEngine__Material_
                       );
    (this->fields).objectMaterial = (Material *)pXVar1;
    return;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void DrawObject(MeshFilter[]) */

void Assembly-CSharp.dll::ObjectEnabler::ObjectEnabler_DrawObject
               (ObjectEnabler *this,MeshFilter__Array *previewMeshes,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  uStack_1 = 0;
  if (previewMeshes != (MeshFilter__Array *)0x0) {
    ppMVar2 = previewMeshes->vector;
    while( true ) {
      if ((int)previewMeshes->max_length <= (int)uStack_1) {
        return;
      }
      if (previewMeshes->max_length <= uStack_1) break;
      this_00 = *ppMVar2;
      submeshIndex = 0;
      while( true ) {
        if (this_00 == (MeshFilter *)0x0) goto code_?;
        pMVar3 = UnityEngine.CoreModule.dll::UnityEngine::MeshFilter::MeshFilter_get_sharedMesh
                           (this_00,(MethodInfo *)0x0);
        if (pMVar3 == (Mesh *)0x0) goto code_?;
        iVar4 = UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_get_subMeshCount
                          (pMVar3,(MethodInfo *)0x0);
        if (iVar4 <= submeshIndex) break;
        pMVar3 = UnityEngine.CoreModule.dll::UnityEngine::MeshFilter::MeshFilter_get_sharedMesh
                           (this_00,(MethodInfo *)0x0);
        this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                            ((Component_1 *)this_00,(MethodInfo *)0x0);
        if (this_01 == (Transform *)0x0) goto code_?;
        pMVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                 Transform_get_localToWorldMatrix
                           ((Matrix4x4 *)&stack0xffffff68,this_01,(MethodInfo *)0x0);
        matrix = *pMVar5;
        material = (this->fields).objectMaterial;
        iVar4 = (this->fields).nameToLayer;
        camera = (this->fields).mainCamera;
        if ((((uint)(TypeInfo__UnityEngine__Graphics->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Graphics->_1).cctor_started == 0)) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Graphics::Graphics_DrawMesh_2
                  (pMVar3,matrix,material,iVar4,camera,submeshIndex,(MethodInfo *)0x0);
        submeshIndex = submeshIndex + 1;
      }
      uStack_1 = uStack_1 + 1;
      ppMVar2 = ppMVar2 + 1;
    }
    uVar6 = func_?(0,0);
    func_?(uVar6);
  }
code_?:
  func_?(0);
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void Initialize() */

void Assembly-CSharp.dll::ObjectEnabler::ObjectEnabler_Initialize
               (ObjectEnabler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UpdateController->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UpdateController->_1).cctor_started == 0)) {
    func_?(TypeInfo__UpdateController);
  }
  UpdateController::UpdateController_AddUpdateObject
            ((IUpdatecontrollerSubscriberUpdate *)this,UpdatePriority__Enum_UPDATEBUCKET_STANDARD,1,
             (MethodInfo *)0x0);
  iVar1 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                    (StringLiteral_Default,(MethodInfo *)0x0);
  (this->fields).nameToLayer = iVar1;
  pCVar2 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_main((MethodInfo *)0x0);
  (this->fields).mainCamera = pCVar2;
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::ObjectEnabler::ObjectEnabler_OnDestroy
               (ObjectEnabler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UpdateController->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UpdateController->_1).cctor_started == 0)) {
    func_?(TypeInfo__UpdateController);
  }
  UpdateController::UpdateController_RemoveUpdateObject
            ((IUpdatecontrollerSubscriberUpdate *)this,(MethodInfo *)0x0);
  obj = (this->fields).objectMaterial;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
            ((Object_1 *)obj,(MethodInfo *)0x0);
  return;
}


/* Void UpdateControllerUpdate() */

void Assembly-CSharp.dll::ObjectEnabler::ObjectEnabler_UpdateControllerUpdate
               (ObjectEnabler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  b = _UNK_?;
  if ((this->fields)._IsDrawingEnabled_k__BackingField == 0) {
    b = _UNK_?;
  }
  fVar1 = (this->fields).currentAlpha;
  t = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
  if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Mathf);
  }
  fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Lerp(fVar1,b,t,(MethodInfo *)0x0);
  pMVar2 = (this->fields).objectMaterial;
  (this->fields).currentAlpha = fVar1;
  if (pMVar2 != (Material *)0x0) {
    pCVar3 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_get_color
                       ((Color *)&stack0xffffffe4,pMVar2,(MethodInfo *)0x0);
    pMVar2 = (this->fields).objectMaterial;
    uVar4 = pCVar3->r;
    uVar5 = pCVar3->g;
    uVar6 = pCVar3->b;
    value.b = (float)uVar6;
    value.g = (float)uVar5;
    value.r = (float)uVar4;
    if (pMVar2 != (Material *)0x0) {
      value.a = (this->fields).currentAlpha;
      UnityEngine.CoreModule.dll::UnityEngine::Material::Material_set_color
                (pMVar2,value,(MethodInfo *)0x0);
      if ((this->fields)._IsDrawingEnabled_k__BackingField == 0 && (this->fields).currentAlpha == b)
      {
        return;
      }
      pMVar7 = (this->fields).woObjectEnabler;
      if (pMVar7 != (MVObjectEnabler *)0x0) {
        bVar8 = MVObjectEnabler::MVObjectEnabler_get_ShowingOutline(pMVar7,(MethodInfo *)0x0);
        if (bVar8 == 0) {
          return;
        }
        pMVar7 = (this->fields).woObjectEnabler;
        index = 0;
        if (pMVar7 != (MVObjectEnabler *)0x0) {
          while (this_00 = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)
                           System.Core.dll::System::Linq::
                           Enumerable+<CreateSelectIterator>c__Iterator10`2[System::Collections::
                           Generic::KeyValuePair`2[System::Object,System::Object],System::Object]::
                           Enumerable_CreateSelectIterator_c_Iterator10_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_System_Object__System_Collections_IEnumerator_get_Current
                                     ((Enumerable_CreateSelectIterator_c_Iterator10_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_System_Object_
                                       *)pMVar7,(MethodInfo *)0x0),
                this_00 != (Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)0x0) {
            pOVar9 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                     Serialization::JsonProperty]::
                     Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                               (this_00,
                                MethodInfo__System__Collections__Generic__List<MV::WorldObject::ObjectLink>__get_Count__
                               );
            if ((int)pOVar9 <= index) {
              return;
            }
            if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
              func_?();
            }
            this_01 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
            pMVar7 = (this->fields).woObjectEnabler;
            if ((((pMVar7 == (MVObjectEnabler *)0x0) ||
                 (method_00 = (MethodInfo *)
                              System.Core.dll::System::Linq::
                              Enumerable+<CreateSelectIterator>c__Iterator10`2[System::Collections::
                              Generic::KeyValuePair`2[System::Object,System::Object],System::Object]
                              ::
                              Enumerable_CreateSelectIterator_c_Iterator10_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_System_Object__System_Collections_IEnumerator_get_Current
                                        ((Enumerable_CreateSelectIterator_c_Iterator10_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_System_Object_
                                          *)pMVar7,(MethodInfo *)0x0),
                 method_00 == (MethodInfo *)0x0)) ||
                (pIVar10 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
                           EventSystems::IEventSystemHandler]::
                           List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                                     ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)
                                      method_00,index,
                                      MethodInfo__System__Collections__Generic__List<MV::WorldObject::ObjectLink>__get_Item_int_
                                     ), pIVar10 == (IEventSystemHandler *)0x0)) ||
               (this_01 == (MVWorldObjectClientManager *)0x0)) break;
            method_01 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                                  (this_01,(int32_t)pIVar10[2].klass,(MethodInfo *)0x0);
            iVar11 = func_?();
            if (iVar11 != 0) {
              iVar11 = func_?();
              if (iVar11 == 0) break;
              this_02 = (MVCubeModelInstance *)func_?();
              bVar8 = MVCubeModelInstance::MVCubeModelInstance_get_IsVisibleSet
                                (this_02,(MethodInfo *)method_01);
              if (bVar8 != 0) {
                iVar11 = func_?();
                if (iVar11 == 0) break;
                this_03 = (MVCubeModelBase *)func_?();
                previewMeshes = MVCubeModelBase::MVCubeModelBase_get_MeshFilters(this_03,method_00);
                ObjectEnabler_DrawObject(this,previewMeshes,(MethodInfo *)0x0);
              }
            }
            pMVar7 = (this->fields).woObjectEnabler;
            index = index + 1;
            if (pMVar7 == (MVObjectEnabler *)0x0) break;
          }
        }
      }
    }
  }
  func_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}

