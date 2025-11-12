
/* Void SetCubeMaterial(Byte) */

void Assembly-CSharp.dll::CubeBullet::CubeBullet_SetCubeMaterial
               (CubeBullet *this,uint8_t id,MethodInfo *method)

{
  bVar1 = cRam_? == '\0';
  this_00 = (this->fields).meshFilter;
  (this->fields)._MaterialID_k__BackingField = id;
  if (bVar1) {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar2 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((((pMVar2 != (MVGameControllerBase *)0x0) &&
       (pMVar3 = (pMVar2->fields).game, pMVar3 != (MVNetworkGame *)0x0)) &&
      (this_01 = (pMVar3->fields)._MaterialRepository_k__BackingField,
      this_01 != (MVMaterialRepository *)0x0)) &&
     ((pMVar4 = MVMaterialRepository::MVMaterialRepository_GetMaterial
                          (this_01,(this->fields)._MaterialID_k__BackingField,(MethodInfo *)0x0),
      pMVar4 != (MVMaterial *)0x0 && (this_00 != (MeshFilter *)0x0)))) {
    UnityEngine.CoreModule.dll::UnityEngine::MeshFilter::MeshFilter_set_sharedMesh
              (this_00,(pMVar4->fields)._Mesh_k__BackingField,(MethodInfo *)0x0);
    obj = (this->fields).meshRenderer;
    pMVar5 = MVGameControllerBase::MVGameControllerBase_get_MaterialLoader((MethodInfo *)0x0);
    if ((pMVar5 != (MaterialLoader *)0x0) && (obj != (MeshRenderer *)0x0)) {
      pMVar6 = (pMVar5->fields)._CubeModelMaterial_k__BackingField;
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Renderer>_UnityEngine__Renderer_
                      ,pMVar6,0,in_R9,unaff_RDI);
        LOCK();
        UNLOCK();
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::Material>_UnityEngine__Material_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (obj == (MeshRenderer *)0x0) {
        FUN_?();
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pvVar8 = (obj->fields)._._._.m_CachedPtr;
      if (pvVar8 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      if ((
          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::Material>_UnityEngine__Material_
          ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
        FUN_?();
      }
      if (pMVar6 == (Material *)0x0) {
        pvVar9 = (void *)0x0;
      }
      else {
        pvVar9 = (pMVar6->fields)._.m_CachedPtr;
      }
      pcVar7 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
        uVar10 = func_?(&UNK_?);
        FUN_?(uVar10,0);
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pcRam_? = pcVar7;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam_?)(pvVar8,pvVar9);
      return;
    }
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::CubeBullet::CubeBullet_Update(CubeBullet *this,MethodInfo *method)

{
  this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                      ((Component *)this,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar1 = TypeInfo__UnityEngine__Vector3->static_fields;
  uVar2._0_4_ = (pVVar1->upVector).x;
  uVar2._4_4_ = (pVVar1->upVector).y;
  fVar3 = (pVVar1->upVector).z;
  pcVar4 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
    uVar2 = func_?(&UNK_?);
    FUN_?(uVar2,0);
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pcRam_? = pcVar4;
  fVar5 = (float)(*pcRam_?)();
  if (this_00 == (Transform *)0x0) {
    FUN_?();
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  aVStack_6[0]._0_8_ = uVar2;
  aVStack_6[0].z = fVar3;
  UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_Rotate_4
            (this_00,aVStack_6,fVar5 * _UNK_?,Space__Enum_Self,(MethodInfo *)0x0);
  return;
}

