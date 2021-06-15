
/* JsonSchemaException() */

void Assembly-CSharp.dll::Newtonsoft::Json::Schema::JsonSchemaException::JsonSchemaException__ctor
               (JsonSchemaException *this,MethodInfo *method)

{
  (this->fields)._.hresult = -0x7feceb00;
  return;
}


/* JsonSchemaException(String) */

void Assembly-CSharp.dll::Newtonsoft::Json::Schema::JsonSchemaException::JsonSchemaException__ctor_1
               (JsonSchemaException *this,String *message,MethodInfo *method)

{
  (this->fields)._.hresult = -0x7feceb00;
  ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,unaff_ESI);
  (this->fields)._.message = message;
  return;
}


/* JsonSchemaException(String, Exception) */

void Assembly-CSharp.dll::Newtonsoft::Json::Schema::JsonSchemaException::JsonSchemaException__ctor_2
               (JsonSchemaException *this,String *message,Exception *innerException,
               MethodInfo *method)

{
  (this->fields)._.hresult = -0x7feceb00;
  ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,unaff_ESI);
  (this->fields)._.inner_exception = innerException;
  (this->fields)._.message = message;
  return;
}


/* JsonSchemaException(SerializationInfo, StreamingContext) */

void Assembly-CSharp.dll::Newtonsoft::Json::Schema::JsonSchemaException::JsonSchemaException__ctor_3
               (JsonSchemaException *this,SerializationInfo *info,StreamingContext context,
               MethodInfo *method)

{
  mscorlib.dll::System::Exception::Exception__ctor_2
            ((Exception *)this,info,context,(MethodInfo *)0x0);
  return;
}


/* JsonSchemaException(String, Exception, Int32, Int32) */

void Assembly-CSharp.dll::Newtonsoft::Json::Schema::JsonSchemaException::JsonSchemaException__ctor_4
               (JsonSchemaException *this,String *message,Exception *innerException,
               int32_t lineNumber,int32_t linePosition,MethodInfo *method)

{
  mscorlib.dll::System::Exception::Exception__ctor_3
            ((Exception *)this,message,innerException,(MethodInfo *)0x0);
  (this->fields)._LineNumber_k__BackingField = lineNumber;
  (this->fields)._LinePosition_k__BackingField = linePosition;
  return;
}

