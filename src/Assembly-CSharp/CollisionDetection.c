
/* List`1[MVOverlapResult] ElipsoidOverlapSector(Vector3, Quaternion, Vector3,
   HashSet`1[System.Int32], Int32) */

List_1_MVOverlapResult_ *
Assembly-CSharp.dll::CollisionDetection::CollisionDetection_ElipsoidOverlapSector
          (Vector3 position,Quaternion rotation,Vector3 radius,HashSet_1_System_Int32_ *ignoreWoIds,
          int32_t layerMask,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVElipsoidOverlapCheck->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVElipsoidOverlapCheck->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVElipsoidOverlapCheck);
  }
  pLVar1 = MVElipsoidOverlapCheck::MVElipsoidOverlapCheck_ElipsoidOverlapCheckSector
                     (radius,position,rotation,layerMask,ignoreWoIds,(MethodInfo *)0x0);
  return pLVar1;
}


/* Boolean MVElipsoidCast(Ray, Vector3, Single, VoxelHit ByRef, HashSet`1[System.Int32], Int32) */

bool Assembly-CSharp.dll::CollisionDetection::CollisionDetection_MVElipsoidCast
               (Ray ray,Vector3 radius,float distance,VoxelHit *voxelHit,
               HashSet_1_System_Int32_ *ignoreWoIds,int32_t layerMask,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Quaternion);
  }
  pQVar1 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_get_identity
                     ((Quaternion *)&stack0xffffffec,(MethodInfo *)0x0);
  fVar2 = pQVar1->z;
  fVar3 = pQVar1->w;
  if ((((uint)(TypeInfo__MVSweptElipsoidCheck->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVSweptElipsoidCheck->_1).cctor_started == 0)) {
    func_?();
  }
  rotation.y = 0.0;
  rotation.x = (float)layerMask;
  rotation.z = fVar2;
  rotation.w = fVar3;
  bVar4 = MVSweptElipsoidCheck::MVSweptElipsoidCheck_MVElipsoidCast_1
                    (ray,radius,rotation,distance,voxelHit,ignoreWoIds,layerMask,(MethodInfo *)0x0);
  return bVar4;
}


/* List`1[VoxelHit] MVElipsoidCastAll(Ray, Vector3, Single, HashSet`1[System.Int32], Int32) */

List_1_VoxelHit_ *
Assembly-CSharp.dll::CollisionDetection::CollisionDetection_MVElipsoidCastAll
          (Ray ray,Vector3 radius,float distance,HashSet_1_System_Int32_ *ignoreWoIds,
          int32_t layerMask,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Quaternion);
  }
  pQVar1 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_get_identity
                     ((Quaternion *)&stack0xffffffec,(MethodInfo *)0x0);
  fVar2 = pQVar1->z;
  fVar3 = pQVar1->w;
  if ((((uint)(TypeInfo__MVSweptElipsoidCheck->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVSweptElipsoidCheck->_1).cctor_started == 0)) {
    func_?();
  }
  rotation.y = 0.0;
  rotation.x = (float)layerMask;
  rotation.z = fVar2;
  rotation.w = fVar3;
  pLVar4 = MVSweptElipsoidCheck::MVSweptElipsoidCheck_MVElipsoidCastAll_1
                     (ray,radius,rotation,distance,ignoreWoIds,layerMask,(MethodInfo *)0x0);
  return pLVar4;
}


/* List`1[VoxelHit] MVElipsoidCastAll(Ray, Transform, Bounds, Single, HashSet`1[System.Int32],
   Int32) */

List_1_VoxelHit_ *
Assembly-CSharp.dll::CollisionDetection::CollisionDetection_MVElipsoidCastAll_1
          (Ray ray,Transform *transform,Bounds localBounds,float distance,
          HashSet_1_System_Int32_ *ignoreWoIds,int32_t layerMask,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVSweptElipsoidCheck->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVSweptElipsoidCheck->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVSweptElipsoidCheck);
  }
  pLVar1 = MVSweptElipsoidCheck::MVSweptElipsoidCheck_MVElipsoidCastAll
                     (ray,transform,localBounds,distance,ignoreWoIds,layerMask,(MethodInfo *)0x0);
  return pLVar1;
}


/* Boolean MVElipsoidCast(Ray, Transform, Bounds, Single, VoxelHit ByRef, HashSet`1[System.Int32],
   Int32) */

bool Assembly-CSharp.dll::CollisionDetection::CollisionDetection_MVElipsoidCast_1
               (Ray ray,Transform *transform,Bounds localBounds,float distance,VoxelHit *voxelHit,
               HashSet_1_System_Int32_ *ignoreWoIds,int32_t layerMask,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVSweptElipsoidCheck->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVSweptElipsoidCheck->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVSweptElipsoidCheck);
  }
  bVar1 = MVSweptElipsoidCheck::MVSweptElipsoidCheck_MVElipsoidCast
                    (ray,transform,localBounds,distance,voxelHit,ignoreWoIds,layerMask,
                     (MethodInfo *)0x0);
  return bVar1;
}


/* Boolean MVHit(Ray, MVWorldObjectClient, VoxelHit ByRef, Single) */

bool Assembly-CSharp.dll::CollisionDetection::CollisionDetection_MVHit
               (Ray ray,MVWorldObjectClient *wo,VoxelHit *voxelHit,float distance,MethodInfo *method
               )

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVRaycast->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVRaycast->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVRaycast);
  }
  bVar1 = MVRaycast::MVRaycast_MVHit(ray,wo,voxelHit,distance,(MethodInfo *)0x0);
  return bVar1;
}


/* List`1[VoxelHit] MVHitAll(Ray, Single, HashSet`1[System.Int32], Int32) */

List_1_VoxelHit_ *
Assembly-CSharp.dll::CollisionDetection::CollisionDetection_MVHitAll
          (Ray ray,float distance,HashSet_1_System_Int32_ *ignoreWoIds,int32_t layerMask,
          MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVRaycast->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVRaycast->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVRaycast);
  }
  pLVar1 = MVRaycast::MVRaycast_MVHitAll(ray,distance,layerMask,ignoreWoIds,(MethodInfo *)0x0);
  return pLVar1;
}


/* Boolean MVHit(Ray, VoxelHit ByRef, Single, HashSet`1[System.Int32], Int32) */

bool Assembly-CSharp.dll::CollisionDetection::CollisionDetection_MVHit_1
               (Ray ray,VoxelHit *voxelHit,float distance,HashSet_1_System_Int32_ *ignoreWoIds,
               int32_t layerMask,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVRaycast->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVRaycast->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVRaycast);
  }
  bVar1 = MVRaycast::MVRaycast_MVHit_1
                    (ray,voxelHit,distance,layerMask,ignoreWoIds,(MethodInfo *)0x0);
  return bVar1;
}


/* Boolean MVSphereCast(Ray, Single, VoxelHit ByRef, Single, HashSet`1[System.Int32], Int32) */

bool Assembly-CSharp.dll::CollisionDetection::CollisionDetection_MVSphereCast
               (Ray ray,float radius,VoxelHit *voxelHit,float distance,
               HashSet_1_System_Int32_ *ignoreWoIds,int32_t layerMask,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?();
  }
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_one
                     ((Vector3 *)&stack0xfffffff0,(MethodInfo *)0x0);
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply_1
                     ((Vector3 *)&stack0xffffffe4,radius,*pVVar1,(MethodInfo *)0x0);
  fVar2 = pVVar1->z;
  if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
    func_?();
  }
  pQVar3 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_get_identity
                     ((Quaternion *)&stack0xffffffe0,(MethodInfo *)0x0);
  fVar4 = pQVar3->x;
  fVar5 = pQVar3->y;
  fVar6 = pQVar3->z;
  fVar7 = pQVar3->w;
  if ((((uint)(TypeInfo__MVSweptElipsoidCheck->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVSweptElipsoidCheck->_1).cctor_started == 0)) {
    func_?();
  }
  radius_00.y = (float)ignoreWoIds;
  radius_00.x = (float)voxelHit;
  radius_00.z = fVar2;
  rotation.y = fVar5;
  rotation.x = fVar4;
  rotation.z = fVar6;
  rotation.w = fVar7;
  bVar8 = MVSweptElipsoidCheck::MVSweptElipsoidCheck_MVElipsoidCast_1
                    (ray,radius_00,rotation,distance,voxelHit,ignoreWoIds,layerMask,
                     (MethodInfo *)0x0);
  return bVar8;
}


/* List`1[VoxelHit] MVSphereCastAll(Ray, Single, Single, HashSet`1[System.Int32], Int32) */

List_1_VoxelHit_ *
Assembly-CSharp.dll::CollisionDetection::CollisionDetection_MVSphereCastAll
          (Ray ray,float radius,float distance,HashSet_1_System_Int32_ *ignoreWoIds,
          int32_t layerMask,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?();
  }
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_one
                     ((Vector3 *)&stack0xfffffff0,(MethodInfo *)0x0);
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply_1
                     ((Vector3 *)&stack0xffffffe4,radius,*pVVar1,(MethodInfo *)0x0);
  fVar2 = pVVar1->z;
  if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
    func_?();
  }
  pQVar3 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_get_identity
                     ((Quaternion *)&stack0xffffffe0,(MethodInfo *)0x0);
  fVar4 = pQVar3->x;
  fVar5 = pQVar3->y;
  fVar6 = pQVar3->z;
  fVar7 = pQVar3->w;
  if ((((uint)(TypeInfo__MVSweptElipsoidCheck->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVSweptElipsoidCheck->_1).cctor_started == 0)) {
    func_?();
  }
  radius_00.y = (float)ignoreWoIds;
  radius_00.x = distance;
  radius_00.z = fVar2;
  rotation.y = fVar5;
  rotation.x = fVar4;
  rotation.z = fVar6;
  rotation.w = fVar7;
  pLVar8 = MVSweptElipsoidCheck::MVSweptElipsoidCheck_MVElipsoidCastAll_1
                     (ray,radius_00,rotation,distance,ignoreWoIds,layerMask,(MethodInfo *)0x0);
  return pLVar8;
}

