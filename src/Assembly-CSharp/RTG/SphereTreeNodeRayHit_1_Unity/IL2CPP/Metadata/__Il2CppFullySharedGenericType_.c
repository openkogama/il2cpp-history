
/* SphereTreeNodeRayHit`1[Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType](Ray,
   SphereTreeNode`1[Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType], Single) */

void Assembly-CSharp.dll::RTG::SphereTreeNodeRayHit`1[Unity::IL2CPP::Metadata::
     __Il2CppFullySharedGenericType]::
     SphereTreeNodeRayHit_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
               (SphereTreeNodeRayHit_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *this,
               Ray *ray,SphereTreeNode_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                        *hitNode,float hitEnter,MethodInfo *method)

{
  bVar1 = iRam_? != 0;
  (this->fields)._hitNode = hitNode;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&this->fields >> 0xc);
    uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
    do {
      uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
      puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  (this->fields)._hitEnter = hitEnter;
  uVar6 = (ray->m_Origin).x;
  uVar7 = (ray->m_Origin).y;
  uVar8 = (ray->m_Direction).x;
  fVar9 = (ray->m_Direction).y;
  fVar10 = (ray->m_Direction).z;
  fVar11 = (ray->m_Origin).z;
  (this->fields)._hitPoint.x = (float)uVar8 * hitEnter + (float)uVar6;
  (this->fields)._hitPoint.y = fVar9 * hitEnter + (float)uVar7;
  (this->fields)._hitPoint.z = fVar10 * hitEnter + fVar11;
  return;
}


/* Single get_HitEnter() */

float Assembly-CSharp.dll::RTG::SphereTreeNodeRayHit`1[Unity::IL2CPP::Metadata::
      __Il2CppFullySharedGenericType]::
      SphereTreeNodeRayHit_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__get_HitEnter
                (SphereTreeNodeRayHit_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *this,
                MethodInfo *method)

{
  return (this->fields)._hitEnter;
}


/* Vector3 get_HitPoint() */

Vector3 * Assembly-CSharp.dll::RTG::SphereTreeNodeRayHit`1[Unity::IL2CPP::Metadata::
          __Il2CppFullySharedGenericType]::
          SphereTreeNodeRayHit_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__get_HitPoint
                    (Vector3 *__return_storage_ptr__,
                    SphereTreeNodeRayHit_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *this
                    ,MethodInfo *method)

{
  fVar1 = (this->fields)._hitPoint.z;
  fVar2 = (this->fields)._hitPoint.y;
  __return_storage_ptr__->x = (this->fields)._hitPoint.x;
  __return_storage_ptr__->y = fVar2;
  __return_storage_ptr__->z = fVar1;
  return __return_storage_ptr__;
}

