
/* Link(Int32, Int32, Int32, Boolean) */

void MVWorldObject.dll::MV::WorldObject::Link::Link__ctor
               (Link *this,int32_t id,int32_t outputWOID,int32_t inputWOID,bool isSet,
               MethodInfo *method)

{
  (this->fields).id = -1;
  (this->fields).outputWOID = -1;
  (this->fields).inputWOID = -1;
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_ESI);
  (this->fields).id = id;
  (this->fields).outputWOID = outputWOID;
  (this->fields).inputWOID = inputWOID;
  (this->fields).isSet = isSet;
  return;
}


/* Link() */

void MVWorldObject.dll::MV::WorldObject::Link::Link__ctor_1(Link *this,MethodInfo *method)

{
  (this->fields).id = -1;
  (this->fields).outputWOID = -1;
  (this->fields).inputWOID = -1;
  return;
}

