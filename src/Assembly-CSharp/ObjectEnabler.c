
/* Void Awake() */

void Assembly-CSharp.dll::ObjectEnabler::ObjectEnabler_Awake(ObjectEnabler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    UnityEngine__Material_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::Material>_UnityEngine__Material_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__PrefabPool);
    cRam_? = '\x01';
  }
  pPVar1 = TypeInfo__PrefabPool->static_fields->instance;
  if (pPVar1 != (PrefabPool *)0x0) {
    pMVar2 = (pPVar1->fields).objectHiddenMaterial;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    pMVar2 = (Material *)
             UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                       ((Object *)pMVar2,
                        UnityEngine__Material_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::Material>_UnityEngine__Material_
                       );
    (this->fields).objectMaterial = pMVar2;
    func_?();
    return;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void DrawObject(MeshFilter[]) */

void Assembly-CSharp.dll::ObjectEnabler::ObjectEnabler_DrawObject
               (ObjectEnabler *this,MeshFilter__Array *previewMeshes,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Graphics);
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
        this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            ((Component *)this_00,(MethodInfo *)0x0);
        if (this_01 == (Transform *)0x0) goto code_?;
        pMVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                 Transform_get_localToWorldMatrix
                           ((Matrix4x4 *)&stack0xffffff68,this_01,(MethodInfo *)0x0);
        matrix = *pMVar5;
        material = (this->fields).objectMaterial;
        iVar4 = (this->fields).nameToLayer;
        camera = (this->fields).mainCamera;
        if ((TypeInfo__UnityEngine__Graphics->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Graphics::Graphics_DrawMesh_3
                  (pMVar3,matrix,material,iVar4,camera,submeshIndex,(MethodInfo *)0x0);
        submeshIndex = submeshIndex + 1;
      }
      uStack_1 = uStack_1 + 1;
      ppMVar2 = ppMVar2 + 1;
    }
    func_?();
  }
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void Initialize() */

void Assembly-CSharp.dll::ObjectEnabler::ObjectEnabler_Initialize
               (ObjectEnabler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UpdateController);
    func_?(&StringLiteral_Default);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UpdateController->_1).cctor_finished_or_no_cctor == 0) {
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
  func_?();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::ObjectEnabler::ObjectEnabler_OnDestroy
               (ObjectEnabler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&TypeInfo__UpdateController);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UpdateController->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UpdateController);
  }
  UpdateController::UpdateController_RemoveUpdateObject
            ((IUpdatecontrollerSubscriberUpdate *)this,(MethodInfo *)0x0);
  obj = (this->fields).objectMaterial;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
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
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MV::WorldObject::ObjectLink>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MV::WorldObject::ObjectLink>__get_Item_int_
                   );
    func_?(&TypeInfo__MVCubeModelInstance);
    cRam_? = '\x01';
  }
  fVar1 = _UNK_?;
  if ((this->fields)._IsDrawingEnabled_k__BackingField != 0) {
    fVar1 = _UNK_?;
  }
  fVar2 = (this->fields).currentAlpha;
  fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
  if (fVar3 < 0.0) {
    fVar3 = 0.0;
  }
  else if (_UNK_? < fVar3) {
    fVar3 = _UNK_?;
  }
  pMVar4 = (this->fields).objectMaterial;
  (this->fields).currentAlpha = (fVar1 - fVar2) * fVar3 + fVar2;
  if (pMVar4 != (Material *)0x0) {
    pCVar5 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_get_color
                       ((Color *)&stack0xffffffe4,pMVar4,(MethodInfo *)0x0);
    pMVar4 = (this->fields).objectMaterial;
    method_00 = (MethodInfo *)pCVar5->g;
    uVar6 = pCVar5->r;
    uVar7 = pCVar5->g;
    uVar8 = pCVar5->b;
    value.b = (float)uVar8;
    value.g = (float)uVar7;
    value.r = (float)uVar6;
    if (pMVar4 != (Material *)0x0) {
      value.a = (this->fields).currentAlpha;
      UnityEngine.CoreModule.dll::UnityEngine::Material::Material_set_color
                (pMVar4,value,(MethodInfo *)0x0);
      if ((this->fields)._IsDrawingEnabled_k__BackingField == 0 &&
          (this->fields).currentAlpha == fVar1) {
        return;
      }
      pMVar9 = (this->fields).woObjectEnabler;
      if (pMVar9 != (MVObjectEnabler *)0x0) {
        if ((pMVar9->fields).showingOutline == 0) {
          return;
        }
        index = (undefined1 *)0x0;
        while (pLVar10 = (pMVar9->fields)._._._.objectLinkRefs,
              pLVar10 != (List_1_MV_WorldObject_ObjectLink_ *)0x0) {
          if ((pLVar10->fields)._size <= (int)index) {
            return;
          }
          this_01 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
          pMVar9 = (this->fields).woObjectEnabler;
          if ((((pMVar9 == (MVObjectEnabler *)0x0) ||
               (this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                          (pMVar9->fields)._._._.objectLinkRefs,
               this_00 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0))
              || (RVar11 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                           RegularExpressions::RegexCharClass+SingleRange]::
                           List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                     (this_00,(int32_t)index,
                                      MethodInfo__System__Collections__Generic__List<MV::WorldObject::ObjectLink>__get_Item_int_
                                     ), RVar11 == (RegexCharClass_SingleRange)0x0)) ||
             (this_01 == (MVWorldObjectClientManager *)0x0)) break;
          pMVar12 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                              (this_01,*(int32_t *)((int)RVar11 + 0x10),(MethodInfo *)0x0);
          if (pMVar12 != (MVWorldObject *)0x0) {
            bVar13 = (TypeInfo__MVCubeModelInstance->_1).naturalAligment;
            if ((bVar13 <= (pMVar12->klass->_1).naturalAligment) &&
               ((MVCubeModelInstance__Class *)(pMVar12->klass->_1).typeHierarchy[bVar13 - 1] ==
                TypeInfo__MVCubeModelInstance)) {
              iVar14 = func_?();
              if (iVar14 == 0) break;
              iVar14 = func_?();
              if (*(char *)(iVar14 + 0xfc) != '\0') {
                iVar14 = func_?();
                if (iVar14 == 0) break;
                this_02 = (MVCubeModelBase *)func_?();
                previewMeshes = MVCubeModelBase::MVCubeModelBase_get_MeshFilters(this_02,method_00);
                method_00 = (MethodInfo *)0x0;
                ObjectEnabler_DrawObject(this,previewMeshes,(MethodInfo *)0x0);
              }
            }
          }
          pMVar9 = (this->fields).woObjectEnabler;
          index = (undefined1 *)((int)&this_01->klass + 1);
          if (pMVar9 == (MVObjectEnabler *)0x0) break;
        }
      }
    }
  }
  func_?();
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}

