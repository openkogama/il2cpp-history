
/* SphereTreeNodeRayHit`1[Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType](Ray,
   SphereTreeNode`1[Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType], Single) */

void Assembly-CSharp.dll::RTG::SphereTreeNodeRayHit`1[Unity::IL2CPP::Metadata::
     __Il2CppFullySharedGenericType]::
     SphereTreeNodeRayHit_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
               (SphereTreeNodeRayHit_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *this,
               Ray ray,SphereTreeNode_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *hitNode
               ,float hitEnter,MethodInfo *method)

{
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_ESI);
  (this->fields)._hitNode = hitNode;
  func_?(&this->fields,hitNode);
  (this->fields)._hitEnter = hitEnter;
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Ray::Ray_GetPoint
                     ((Vector3 *)&stack0xfffffff0,&ray,hitEnter,(MethodInfo *)0x0);
  fVar2 = pVVar1->y;
  fVar3 = pVVar1->z;
  (this->fields)._hitPoint.x = pVVar1->x;
  (this->fields)._hitPoint.y = fVar2;
  (this->fields)._hitPoint.z = fVar3;
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

