
/* List`1[MVOverlapResult] ElipsoidOverlapSector(Vector3, Quaternion, Vector3,
   HashSet`1[System.Int32], Int32) */

List_1_MVOverlapResult_ *
Assembly-CSharp.dll::CollisionDetection::CollisionDetection_ElipsoidOverlapSector
          (Vector3 position,Quaternion rotation,Vector3 radius,HashSet_1_System_Int32_ *ignoreWoIds,
          int32_t layerMask,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVElipsoidOverlapCheck);
    cRam_? = '\x01';
  }
  if ((TypeInfo__MVElipsoidOverlapCheck->_1).cctor_finished_or_no_cctor == 0) {
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
    func_?(&TypeInfo__MVSweptElipsoidCheck);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Quaternion);
    cRam_? = '\x01';
  }
  rotation = TypeInfo__UnityEngine__Quaternion->static_fields->identityQuaternion;
  if ((TypeInfo__MVSweptElipsoidCheck->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MVSweptElipsoidCheck);
  }
  bVar1 = MVSweptElipsoidCheck::MVSweptElipsoidCheck_MVElipsoidCast_1
                    (ray,radius,rotation,distance,voxelHit,ignoreWoIds,layerMask,(MethodInfo *)0x0);
  return bVar1;
}


/* List`1[VoxelHit] MVElipsoidCastAll(Ray, Vector3, Single, HashSet`1[System.Int32], Int32) */

List_1_VoxelHit_ *
Assembly-CSharp.dll::CollisionDetection::CollisionDetection_MVElipsoidCastAll
          (Ray ray,Vector3 radius,float distance,HashSet_1_System_Int32_ *ignoreWoIds,
          int32_t layerMask,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVSweptElipsoidCheck);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Quaternion);
    cRam_? = '\x01';
  }
  rotation = TypeInfo__UnityEngine__Quaternion->static_fields->identityQuaternion;
  if ((TypeInfo__MVSweptElipsoidCheck->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MVSweptElipsoidCheck);
  }
  pLVar1 = MVSweptElipsoidCheck::MVSweptElipsoidCheck_MVElipsoidCastAll_1
                     (ray,radius,rotation,distance,ignoreWoIds,layerMask,(MethodInfo *)0x0);
  return pLVar1;
}


/* List`1[VoxelHit] MVElipsoidCastAll(Ray, Transform, Bounds, Single, HashSet`1[System.Int32],
   Int32) */

List_1_VoxelHit_ *
Assembly-CSharp.dll::CollisionDetection::CollisionDetection_MVElipsoidCastAll_1
          (Ray ray,Transform *transform,Bounds localBounds,float distance,
          HashSet_1_System_Int32_ *ignoreWoIds,int32_t layerMask,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVSweptElipsoidCheck);
    cRam_? = '\x01';
  }
  if ((TypeInfo__MVSweptElipsoidCheck->_1).cctor_finished_or_no_cctor == 0) {
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
    func_?(&TypeInfo__MVSweptElipsoidCheck);
    cRam_? = '\x01';
  }
  if ((TypeInfo__MVSweptElipsoidCheck->_1).cctor_finished_or_no_cctor == 0) {
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
    func_?(&TypeInfo__MVRaycast);
    cRam_? = '\x01';
  }
  if ((TypeInfo__MVRaycast->_1).cctor_finished_or_no_cctor == 0) {
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
    func_?(&TypeInfo__MVRaycast);
    cRam_? = '\x01';
  }
  if ((TypeInfo__MVRaycast->_1).cctor_finished_or_no_cctor == 0) {
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
    func_?(&TypeInfo__MVRaycast);
    cRam_? = '\x01';
  }
  if ((TypeInfo__MVRaycast->_1).cctor_finished_or_no_cctor == 0) {
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
    func_?(&TypeInfo__MVSweptElipsoidCheck);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pVVar1 = TypeInfo__UnityEngine__Vector3->static_fields;
  uVar2 = (pVVar1->oneVector).x;
  uVar3 = (pVVar1->oneVector).y;
  fVar4 = (pVVar1->oneVector).z;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Quaternion);
    cRam_? = '\x01';
  }
  rotation = TypeInfo__UnityEngine__Quaternion->static_fields->identityQuaternion;
  if ((TypeInfo__MVSweptElipsoidCheck->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MVSweptElipsoidCheck);
  }
  radius_00.z = fVar4 * radius;
  radius_00.x = (float)uVar2 * radius;
  radius_00.y = (float)uVar3 * radius;
  bVar5 = MVSweptElipsoidCheck::MVSweptElipsoidCheck_MVElipsoidCast_1
                    (ray,radius_00,rotation,distance,voxelHit,ignoreWoIds,layerMask,
                     (MethodInfo *)0x0);
  return bVar5;
}


/* List`1[VoxelHit] MVSphereCastAll(Ray, Single, Single, HashSet`1[System.Int32], Int32) */

List_1_VoxelHit_ *
Assembly-CSharp.dll::CollisionDetection::CollisionDetection_MVSphereCastAll
          (Ray ray,float radius,float distance,HashSet_1_System_Int32_ *ignoreWoIds,
          int32_t layerMask,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVSweptElipsoidCheck);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pVVar1 = TypeInfo__UnityEngine__Vector3->static_fields;
  uVar2 = (pVVar1->oneVector).x;
  uVar3 = (pVVar1->oneVector).y;
  fVar4 = (pVVar1->oneVector).z;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Quaternion);
    cRam_? = '\x01';
  }
  rotation = TypeInfo__UnityEngine__Quaternion->static_fields->identityQuaternion;
  if ((TypeInfo__MVSweptElipsoidCheck->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MVSweptElipsoidCheck);
  }
  radius_00.z = fVar4 * radius;
  radius_00.x = (float)uVar2 * radius;
  radius_00.y = (float)uVar3 * radius;
  pLVar5 = MVSweptElipsoidCheck::MVSweptElipsoidCheck_MVElipsoidCastAll_1
                     (ray,radius_00,rotation,distance,ignoreWoIds,layerMask,(MethodInfo *)0x0);
  return pLVar5;
}

