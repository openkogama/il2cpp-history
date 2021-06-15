
/* Boolean Equals(MVNetworkReporter+SendTransformData) */

bool Assembly-CSharp.dll::MVNetworkReporter+SendTransformData::
     MVNetworkReporter_SendTransformData_Equals
               (MVNetworkReporter_SendTransformData *this,MVNetworkReporter_SendTransformData other,
               MethodInfo *method)

{
  bVar1 = func_?(&(this->position).z,other.position.x,other.position.y,other.position.z,
                          other.rotation,method);
  return bVar1;
}


/* Boolean Equals(Object) */

bool Assembly-CSharp.dll::MVNetworkReporter+SendTransformData::
     MVNetworkReporter_SendTransformData_Equals_1
               (MVNetworkReporter_SendTransformData *this,Object *obj,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (obj != (Object *)0x0) {
    pTVar1 = mscorlib.dll::System::Object::Object_GetType(obj,(MethodInfo *)0x0);
    handle = TypeRef__MVNetworkReporter__SendTransformData;
    if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__Type->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__Type);
    }
    pTVar2 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                       ((RuntimeTypeHandle)handle,(MethodInfo *)0x0);
    if (pTVar1 == pTVar2) {
      if ((obj->klass->_0).element_class ==
          (TypeInfo__MVNetworkReporter__SendTransformData->_0).element_class) {
        puVar3 = (undefined4 *)func_?(obj);
        bVar4 = func_?(&(this->position).z,*puVar3,puVar3[1],puVar3[2],puVar3[3],0);
        return bVar4;
      }
      func_?(obj,TypeInfo__MVNetworkReporter__SendTransformData);
      pcVar5 = (code *)swi(3);
      bVar4 = (*pcVar5)();
      return bVar4;
    }
  }
  return 0;
}


/* Int32 GetHashCode() */

int32_t Assembly-CSharp.dll::MVNetworkReporter+SendTransformData::
        MVNetworkReporter_SendTransformData_GetHashCode
                  (MVNetworkReporter_SendTransformData *this,MethodInfo *method)

{
  iVar1 = func_?(&(this->position).z,0);
  piVar2 = (int *)this[1].position.y;
  if (piVar2 == (int *)0x0) {
    return iVar1 * 0x18d;
  }
  uVar3 = (**(code **)(*piVar2 + 0xd0))(piVar2,*(undefined4 *)(*piVar2 + 0xd4));
  return iVar1 * 0x18d ^ uVar3;
}


/* MVNetworkReporter+SendTransformData(Vector3, Byte[]) */

void Assembly-CSharp.dll::MVNetworkReporter+SendTransformData::
     MVNetworkReporter_SendTransformData__ctor
               (MVNetworkReporter_SendTransformData *this,Vector3 position,Byte__Array *rotation,
               MethodInfo *method)

{
  *(undefined8 *)&(this->position).z = position._0_8_;
  this[1].position.x = position.z;
  this[1].position.y = (float)rotation;
  return;
}


/* Boolean op_Equality(MVNetworkReporter+SendTransformData, MVNetworkReporter+SendTransformData) */

bool Assembly-CSharp.dll::MVNetworkReporter+SendTransformData::
     MVNetworkReporter_SendTransformData_op_Equality
               (MVNetworkReporter_SendTransformData std1,MVNetworkReporter_SendTransformData std2,
               MethodInfo *method)

{
  bVar1 = func_?(&std1,std2.position.x,std2.position.y,std2.position.z,std2.rotation,0);
  return bVar1;
}


/* Boolean op_Inequality(MVNetworkReporter+SendTransformData, MVNetworkReporter+SendTransformData)
    */

bool Assembly-CSharp.dll::MVNetworkReporter+SendTransformData::
     MVNetworkReporter_SendTransformData_op_Inequality
               (MVNetworkReporter_SendTransformData std1,MVNetworkReporter_SendTransformData std2,
               MethodInfo *method)

{
  cVar1 = func_?(&std1,std2.position.x,std2.position.y,std2.position.z,std2.rotation,0);
  return cVar1 == '\0';
}

