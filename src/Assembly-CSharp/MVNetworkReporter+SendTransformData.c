
/* Boolean Equals(MVNetworkReporter+SendTransformData) */

bool Assembly-CSharp.dll::MVNetworkReporter+SendTransformData::
     MVNetworkReporter_SendTransformData_Equals
               (MVNetworkReporter_SendTransformData *this,MVNetworkReporter_SendTransformData other,
               MethodInfo *method)

{
  uVar1 = (this->position).x;
  uVar2 = (this->position).y;
  fVar3 = other.position.z - (this->position).z;
  if (_UNK_? <=
      (other.position.y - (float)uVar2) * (other.position.y - (float)uVar2) +
      (other.position.x - (float)uVar1) * (other.position.x - (float)uVar1) + fVar3 * fVar3) {
    return 0;
  }
  if (other.rotation != (Byte__Array *)0x0) {
    uVar4 = (other.rotation)->max_length;
    if (uVar4 != 0) {
      pBVar5 = this->rotation;
      if (pBVar5 == (Byte__Array *)0x0) goto code_?;
      if (pBVar5->max_length != 0) {
        if ((other.rotation)->vector[0] != pBVar5->vector[0]) {
          return 0;
        }
        if ((1 < uVar4) && (1 < pBVar5->max_length)) {
          if ((other.rotation)->vector[1] != pBVar5->vector[1]) {
            return 0;
          }
          if ((2 < uVar4) && (2 < pBVar5->max_length)) {
            return (other.rotation)->vector[2] == pBVar5->vector[2];
          }
        }
      }
    }
    func_?();
  }
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  bVar7 = (*pcVar6)();
  return bVar7;
}


/* Boolean Equals(Object) */

bool Assembly-CSharp.dll::MVNetworkReporter+SendTransformData::
     MVNetworkReporter_SendTransformData_Equals_1
               (MVNetworkReporter_SendTransformData *this,Object *obj,MethodInfo *method)

{
  uVar1 = CONCAT44(unaff_EBP,unaff_EBX);
  if (cRam_? == '\0') {
    func_?(&TypeRef__MVNetworkReporter__SendTransformData);
    func_?(&TypeInfo__MVNetworkReporter__SendTransformData);
    func_?(&TypeInfo__System__Type);
    cRam_? = '\x01';
  }
  if (obj != (Object *)0x0) {
    left = (XNamespace *)mscorlib.dll::System::Object::Object_GetType(obj,(MethodInfo *)0x0);
    handle = TypeRef__MVNetworkReporter__SendTransformData;
    if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__System__Type,uVar1);
    }
    right = (XNamespace *)
            mscorlib.dll::System::Type::Type_GetTypeFromHandle
                      ((RuntimeTypeHandle)handle,(MethodInfo *)0x0);
    bVar2 = System.Xml.Linq.dll::System::Xml::Linq::XNamespace::XNamespace_op_Inequality
                      (left,right,(MethodInfo *)0x0);
    if (bVar2 == 0) {
      if ((obj->klass->_0).element_class ==
          (TypeInfo__MVNetworkReporter__SendTransformData->_0).element_class) {
        pMVar3 = (MVNetworkReporter_SendTransformData *)func_?();
        bVar2 = MVNetworkReporter_SendTransformData_Equals
                          ((MVNetworkReporter_SendTransformData *)&UNK_?,*pMVar3,
                           (MethodInfo *)0x0);
        return bVar2;
      }
      func_?();
      pcVar4 = (code *)swi(3);
      bVar2 = (*pcVar4)();
      return bVar2;
    }
  }
  return 0;
}


/* Int32 GetHashCode() */

int32_t Assembly-CSharp.dll::MVNetworkReporter+SendTransformData::
        MVNetworkReporter_SendTransformData_GetHashCode
                  (MVNetworkReporter_SendTransformData *this,MethodInfo *method)

{
  uVar1 = mscorlib.dll::System::Single::Single_GetHashCode((Single *)this,(MethodInfo *)0x0);
  iVar2 = mscorlib.dll::System::Single::Single_GetHashCode
                    ((Single *)&(this->position).y,(MethodInfo *)0x0);
  iVar3 = mscorlib.dll::System::Single::Single_GetHashCode
                    ((Single *)&(this->position).z,(MethodInfo *)0x0);
  pBStack4 = this->rotation;
  uVar1 = iVar3 >> 2 ^ iVar2 * 4 ^ uVar1;
  if (pBStack4 != (Byte__Array *)0x0) {
    _Stack00000010 = pBStack4->klass[1]._0.this_arg.data;
    uVar5 = (**(code **)&pBStack4->klass[1]._0.byval_arg.attrs)();
    return uVar1 * 0x18d ^ uVar5;
  }
  return uVar1 * 0x18d;
}


/* MVNetworkReporter+SendTransformData(Vector3, Byte[]) */

void Assembly-CSharp.dll::MVNetworkReporter+SendTransformData::
     MVNetworkReporter_SendTransformData__ctor
               (MVNetworkReporter_SendTransformData *this,Vector3 position,Byte__Array *rotation,
               MethodInfo *method)

{
  (this->position).x = position.x;
  (this->position).y = position.y;
  (this->position).z = position.z;
  this->rotation = rotation;
  func_?(&this->rotation,rotation);
  return;
}


/* Boolean op_Equality(MVNetworkReporter+SendTransformData, MVNetworkReporter+SendTransformData) */

bool Assembly-CSharp.dll::MVNetworkReporter+SendTransformData::
     MVNetworkReporter_SendTransformData_op_Equality
               (MVNetworkReporter_SendTransformData std1,MVNetworkReporter_SendTransformData std2,
               MethodInfo *method)

{
  bVar1 = MVNetworkReporter_SendTransformData_Equals(&std1,std2,(MethodInfo *)0x0);
  return bVar1;
}


/* Boolean op_Inequality(MVNetworkReporter+SendTransformData, MVNetworkReporter+SendTransformData)
    */

bool Assembly-CSharp.dll::MVNetworkReporter+SendTransformData::
     MVNetworkReporter_SendTransformData_op_Inequality
               (MVNetworkReporter_SendTransformData std1,MVNetworkReporter_SendTransformData std2,
               MethodInfo *method)

{
  bVar1 = MVNetworkReporter_SendTransformData_Equals(&std1,std2,(MethodInfo *)0x0);
  return bVar1 == 0;
}

